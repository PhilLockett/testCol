// Build using:
//   g++ -o test test.cpp electronconfigs.cpp Element_c.cpp
//
// Run using:
//   ./test <int> [<int>...]

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

#include "electronconfigs.h"
#include "Element_c.h"

#include "Tracker.h"
#include "Coll.h"


/////////////////////////////////////////////////////////////////////////////
// Worker Functions.
#ifndef ELEMENTS
#define ELEMENTS(a) ((sizeof(a)) / (sizeof(a[0])))
#endif

#define _JOIN_(s1, v1, s2) s1 " " #v1 " " s2
#define JOINER(s1, v1, s2) _JOIN_(s1, v1, s2)

template<typename T>
void _dump(std::string name, const T a[], size_t s)
{
	std::cout << "\n";
	std::cout << name;
	std::cout << "[" << s << "] = { ";
	std::cout << "\n";

	for (int i = 0; i < s; ++i)
		std::cout << "  " << a[i] << "\n";

	std::cout << "}\n";
}
#define DUMPARRAY(a) _dump(#a, a, ELEMENTS(a))

template<typename T>
void _dump(std::string name, const std::vector<T> & v)
{
	std::cout << "\n";
	std::cout << name;
	std::cout << "[" << v.capacity() << "|" << v.size() << "] = { ";
	std::cout << "\n";

	for (const T & i : v)
		std::cout << "  " << i << "\n";

	std::cout << "}\n";
}
#define DUMP(v) _dump(#v, v)

template<typename T>
void _dumpset(std::string name, const std::set<T> & v)
{
	std::cout << "\n";
	std::cout << name;
	std::cout << "[" << v.size() << "] = { ";
	std::cout << "\n";

	for (const T & i : v)
		std::cout << "  " << i << "\n";

	std::cout << "}\n";
}
#define DUMPSET(v) _dumpset(#v, v)


/////////////////////////////////////////////////////////////////////////////

int test0(void)
{
	std::cout << "\ntest0() - test move basics and default Coll usage\n\n";

	std::string s1{"initialised"};
	std::cout << "s1 '" << s1 << "'\n";

	std::string s2(std::move(s1));
	std::cout << "s1 '" << s1 << "'\n";
	std::cout << "s2 '" << s2 << "'\n";

	std::cout << "\n";
	std::cout << "Use MarxBrothers, a default Coll\n";
	std::cout << "\n";

	using namespace std::string_literals;

	Coll MarxBrothers;
	std::string name1{"Chico"};
	const std::string name2{"Harpo"};
	const std::string name3{"Groucho"};
	const char * name4 = "Zeppo";

	MarxBrothers.insert(name1);
	MarxBrothers.insert(const_cast<std::string &>(name2));
	MarxBrothers.add(name3);
	MarxBrothers.add(name3);		// Silently dropped.
	MarxBrothers.add("Gummo");
	MarxBrothers.add(name4);

	MarxBrothers.loaded();
	std::cout << "MarxBrothers loaded\n";

	std::cout << "MarxBrothers display() using defaults\n";
	MarxBrothers.display();

	std::cout << "\n";
	std::cout << "name1: \"" << name1 << "\"\n";
	std::cout << "name2: \"" << name2 << "\"\n";
	std::cout << "name3: \"" << name3 << "\"\n";
	std::cout << "name4: \"" << name4 << "\"\n";
	std::cout << "\n";
	std::cout << "\"Gummo\": " << MarxBrothers.getIndex("Gummo") << "\n";
	std::cout << "\"" << name3 << "\": " << MarxBrothers.getIndex(name3) << "\n";
	std::cout << "\"" << name4 << "\": " << MarxBrothers.getIndex(name4) << "\n";
	std::cout << "\n";
	std::cout << "MarxBrothers[0]: \"" << MarxBrothers.getValue(0) << "\"\n";
	std::cout << "MarxBrothers[1]: \"" << MarxBrothers[1] << "\"\n";
	std::cout << "Last MarxBrothers: \"" << MarxBrothers.getValue(MarxBrothers.size()-1) << "\"\n";
	std::cout << "\n";

	std::cout << "test0() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test1(void)
{
	std::cout << "\ntest1() - basic vector move test\n\n";

	Tracker a{111, "Adam"};
	std::vector<Tracker> humankind;
	std::cout << "Populate vector using push_back()\n";
	humankind.reserve(3);
	humankind.push_back(a);
	humankind.push_back({121, "Eve"});
	humankind.push_back({122, "Devil"});
	DUMP(humankind);

	std::cout << '\n';
	std::cout << "Clear vector\n";
	humankind.clear();
	DUMP(humankind);

	std::cout << '\n';
	std::cout << "Repopulate vector using emplace_back()\n";
	humankind.push_back(a);
	humankind.emplace_back(131, "Eve II");
	humankind.emplace_back(132, "Devil II");
	DUMP(humankind);

	std::cout << "Replace item 1 -> [" << humankind[1] << "]\n";
	humankind[1] = Tracker(141, "Kane");
	DUMP(humankind);

	std::cout << "Replace item 0 -> [" << humankind[0] << "]\n";
	humankind[0] = Tracker(142, "Abel");
	DUMP(humankind);

	std::cout << "Append item beyond capacity\n";
	humankind.emplace_back(151, "Oppenheimer");
	DUMP(humankind);

	std::cout << "\ntest1() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

std::vector<Tracker> test2a(void)
{
	std::cout << "\ntest2a()\n\n";

	std::vector<Tracker> list;
	list.reserve(4);
	Tracker first{21, "line 1"};
	list.push_back(first);				// Copy
	list.emplace_back(22, "line 2");	// Move
	list.emplace_back(23, "line 3");	// Move
	list.push_back({24, "line 4"});		// Copy & Destroy temp

	DUMP(list);

	std::cout << "\ntest2a() done - list should not be copied, moved or destroyed.\n";

	return list;						// Destroy "first" on exit.
}

int test2(void)
{
	std::cout << "\ntest2() - testing vector scope\n\n";

	std::vector<Tracker> myList = test2a();	// Move
	DUMP(myList);

	std::cout << "\ntest2() done - list should be destroyed.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test3(void)
{
	std::cout << "\ntest3() - testing loop scope\n\n";

	Tracker a{310, "Adam"};

	std::cout << "\nwhile loop scope\n";
	int i = 3;
	while (i)
	{
		Tracker b{320 + i, "Ben"};
		i--;
	}

	std::cout << "\nfor loop scope\n";
	for (int i = 0; i < 2; ++i)
	{
		Tracker c{330 + i, "Chuck"};
	}

	std::cout << "\ntest3() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test4(void)
{
	std::cout << "\ntest4() - array test\n\n";

	Tracker a{411, "Larry"};
	Tracker stooges[3];
	stooges[0] = a;
	stooges[1] = {421, "Curly"};
	stooges[2] = {422, "Moe"};
	DUMPARRAY(stooges);

	std::cout << "Replace item 1\n";
	stooges[1] = Tracker(431, "Shemp");
	DUMPARRAY(stooges);

	std::cout << "\nInitialised array\n";
	Tracker bonds[] = {
		{ 441, "Connery" },
		{ 442, "Lazenby" },
		{ 443, "Moore" },
		{ 444, "Dalton" },
		{ 445, "Brosnan" },
		{ 446, "Craig" },
	};
	DUMPARRAY(bonds);

	std::cout << "\ntest4() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test5a(Coll<Tracker, TrackerOps> & coll)
{
	std::cout << "\ntest5a() - load Coll from an initialised vector.\n";

	std::cout << "\nBuilding data.\n";
	std::vector<Tracker> vals{
		{ 510, "zero" },
		{ 511, "one" },
		{ 512, "two" },
	};

	std::cout << "\nInserting data (uses move).\n";
	for (auto &val : vals)
	{
		std::cout << "Inserting " << val << std::endl;

		coll.insert(val);
	}
	// coll.add({ 520, "zero" });
	// coll.add({ 521, "one" });
	// coll.add({ 522, "two" });

	std::cout << "\nLoading data (into vector and map in coll).\n";
	coll.loaded();
	std::cout << "Data loaded.\n";

	std::cout << "\ntest5a() done - should not destroy coll.\n";

	return 0;
}

int test5(void)
{
	std::cout << "\ntest5() - remote Coll load test\n\n";

	Coll<Tracker, TrackerOps> coll;
	test5a(coll);
	std::cout << "\n";
	std::cout << "Data collected.\n";
	coll.display();
	std::cout << "\n";

	std::cout << "test5() done - clean up coll." << std::endl;

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

using ElementPtr = std::shared_ptr<Element_c>;

struct ElementOps
{
  bool operator()( const ElementPtr & a, const ElementPtr & b ) const
    { return a->getZ() < b->getZ(); }
  void operator()( const ElementPtr & a ) const
    { std::cout << "  " << a->getZ() << ' ' << a->getName() << '\n'; }
  void operator()( size_t i, const ElementPtr & a ) const
    { std::cout << i << "\t" << a->getZ() << ' ' << a->getSymbol() << ' ' << a->getName() << '\n'; }
};

Coll<ElementPtr, ElementOps> coll{};

void initColZ(void)
{
	std::cout << "\ninitColZ() - load global Coll with shared_ptrs to large Objects\n\n";

	const int first{ELEMENT_INDEX_FIRST};
	const int last{ELEMENT_KNOWN_COUNT};
	// const int last{20};
	const element_conf_t ** ElementConf = &ElementConfigurations[first];
	for (int i = first; i <= last; ++i, ++ElementConf)
	{
		const ElementPtr element_ptr = std::make_shared<Element_c>(*ElementConf);
		coll.add(element_ptr);
	}

	coll.loaded();
	std::cout << "coll loaded\n";
	std::cout << "\ninitColZ() done.\n";
}

int test6a(void)
{
	std::cout << "\ntest6a() - load local Coll from global Coll test (no destruction)\n\n";

	struct MyOps
	{
		bool operator()(const ElementPtr & a, const ElementPtr & b) const
		{
			if (const auto diff{a->getMelt() - b->getMelt()}; diff != 0.0) return diff < 0.0;

			return a->getZ() < b->getZ();
		}
		void operator()( const ElementPtr & a ) const
			{ std::cout << "  " << a->getMelt() << ' ' << a->getZ() << ' ' << a->getSymbol() << ' ' << a->getName() << '\n'; }
	};
	Coll<ElementPtr, MyOps> myColl{};

	std::cout << "Loading myColl\n";
	for (const auto & item : coll)
	{
		myColl.add(item);
	}
	myColl.loaded();

	std::cout << "myColl loaded size = " << myColl.size() << "\n";

	std::cout << "\nmyColl for_each():\n";
	std::for_each( myColl.begin(), myColl.end(), MyOps() );
	std::cout << "\n";

	std::cout << "\ntest6a() done.\n";

	return 0;
}

int test6(void)
{
	std::cout << "\ntest6() - global Coll test (no destruction on function exit)\n\n";
	initColZ();

	test6a();

	std::cout << "\ncoll display():\n";
	coll.display(ElementOps());
	std::cout << "\n";

	std::cout << "\ncoll for():\n";
	for (const auto item : coll)
	{
        std::cout << "\t" << *item << "\n";
	}
	std::cout << "\n";

	std::cout << "\ncoll for_each():\n";
	std::for_each( coll.begin(), coll.end(), ElementOps() );
	std::cout << "\n";

	std::cout << "\ncoll access element:\n";
	const ElementPtr & e{coll.getValue(9)};
	const size_t index{coll.getIndex(e)};

	std::cout << e->getName() << " = " << 9 << "\n";
	std::cout << index << " = " << coll.getValue(index)->getName() << "\n";

	std::cout << "\ntest6() done." << std::endl;

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

using BondPtr = std::shared_ptr<Tracker>;

struct BondOps
{
	bool operator()( const BondPtr & a, const BondPtr & b ) const
		{ return *a < *b; }
	void operator()( const BondPtr & a ) const
		{ std::cout << "  " << *a << '\n'; }
	void operator()( size_t i, const BondPtr & a ) const
		{ std::cout << "[" << i << "]\t" << *a << '\n'; }
};

Coll<BondPtr, BondOps> test7a(void)
{
	std::cout << "\n";
	std::cout << "test7a() - load Coll from array and return Coll test\n";
	std::cout << "\n";

	std::cout << "Initialise array\n";
	Tracker bonds[] = {
		{ 7, "Connery" },
		{ 1, "Niven" },
		{ 1, "Lazenby" },
		{ 7, "Moore" },
		{ 2, "Dalton" },
		{ 4, "Brosnan" },
		{ 5, "Craig" },
	};
	DUMPARRAY(bonds);

	const int first{};
	const int last{ELEMENTS(bonds)};
	Coll<BondPtr, BondOps> bondCollection{};
	for (int i{first}; i < last; ++i)
	{
		const BondPtr bond_ptr = std::make_shared<Tracker>(bonds[i]);
		bondCollection.add(bond_ptr);
	}
	bondCollection.loaded();
	std::cout << "bondCollection loaded\n";

	std::cout << "\n";
	std::cout << "test7a() done - destroy bonds array but not bondCollection.\n";	

	return bondCollection;
}

void test7b(std::ostream & os, const Coll<BondPtr, BondOps> & collRef)
{
	os << "\n";
	os << "test7b() - const Coll test - display using different methods.\n";
	os << "\n";

	os << "coll display() using a lambda\n";
    auto lineOut = [&os](size_t i, const BondPtr & a) { os << "[" << i << "] = " << *a << '\n'; };
	collRef.display(lineOut);
	os << "\n";

	os << "coll iterate over range\n";
	for (const auto & bondPtr : collRef)
	{
		os << "  " << *bondPtr << "\n";
	}
	os << "\n";

	os << "coll for loop\n";
	for (int i{}; i < collRef.size(); ++i)
	{
		os << "  coll[" << i << "] = (" << *collRef[i] << ")\n";
	}
	os << "\n";

    auto lineOut2 = [&os](const BondPtr & a) { os << "  [" << *a << "]\n"; };
	os << "coll for_each()\n";
	std::for_each( collRef.begin(), collRef.end(), lineOut2 );
	os << "\n";

	os << "test7b() done - does not destroy coll.\n";	
}

int test7(void)
{
	std::cout << "\n";
	std::cout << "test7() - local Coll scope test\n";
	std::cout << "\n";

	Coll<BondPtr, BondOps> bondColl{test7a()};

	std::cout << "\n";
	std::cout << "bondColl loaded\n";
	std::cout << "bondColl display()\n";
	bondColl.display(BondOps());
	std::cout << "\n";
	std::cout << "bondColl for_each()\n";
	std::for_each( bondColl.begin(), bondColl.end(), BondOps() );

	test7b(std::cout, bondColl);
	std::cout << "\n";

	std::cout << "test7() done - destroy bondColl." << std::endl;

	return 0;
}

void help(const char *arg)
{
	std::cout << "\nError, option '" << arg << "' not found!\n\n";
	std::cout << "Options available:\n";
	std::cout << "\t0 - test move basics and default Coll usage\n";
	std::cout << "\t1 - basic vector move test\n";
	std::cout << "\t2 - testing vector scope\n";
	std::cout << "\t3 - testing loop scope\n";
	std::cout << "\t4 - array test\n";
	std::cout << "\t5 - remote Coll load test\n";
	std::cout << "\t6 - global Coll test (no destruction on function exit)\n";
	std::cout << "\t7 - local Coll scope test\n";

}


///////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[])
{
	std::cout << "main()\n";

	for (int i{1}; i < argc; ++i)
	{
		const char *arg{argv[i]};
		if (!isdigit(*arg))
		{
			help(arg);

			continue;
		}

		const int t{atoi(arg)};
		switch (t)
		{
		case 0:	test0();	break;
		case 1:	test1();	break;
		case 2:	test2();	break;
		case 3:	test3();	break;
		case 4:	test4();	break;
		case 5:	test5();	break;
		case 6:	test6();	break;
		case 7:	test7();	break;

		default:
			help(arg);
			break;
		}
	}

	std::cout << "\n";
	std::cout << "Global Coll not destroyed test\n";
	std::cout << "coll display():\n";
	coll.display(ElementOps());
	std::cout << "\n";
	std::cout << "main() done - destroy all data.\n";

	return 0;
}
