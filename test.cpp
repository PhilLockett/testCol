// Build using:
//   g++ -o test test.cpp
//
// Run using:
//   ./test

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
	std::cout << "\ntest0() - test basics\n\n";

	std::string s1{"initialised"};
	std::cout << "s1 '" << s1 << "'\n";

	std::string s2(std::move(s1));
	std::cout << "s1 '" << s1 << "'\n";
	std::cout << "s2 '" << s2 << "'\n";

	std::cout << "\ntest0() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test1(void)
{
	std::cout << "\ntest1() - vector test\n\n";

	Tracker a{10, "Adam"};
	std::vector<Tracker> humankind;
	std::cout << "Populate vector using push_back()\n";
	humankind.reserve(3);
	humankind.push_back(a);
	humankind.push_back({11, "Eve"});
	humankind.push_back({12, "Devil"});
	DUMP(humankind);

	std::cout << '\n';
	std::cout << "Clear vector\n";
	humankind.clear();
	DUMP(humankind);

	std::cout << '\n';
	std::cout << "Repopulate vector using emplace_back()\n";
	humankind.push_back(a);
	humankind.emplace_back(13, "Eve II");
	humankind.emplace_back(14, "Devil II");
	DUMP(humankind);

	std::cout << "Replace item 1 -> [" << humankind[1] << "]\n";
	humankind[1] = Tracker(20, "Kane");
	DUMP(humankind);

	std::cout << "Replace item 0 -> [" << humankind[0] << "]\n";
	humankind[0] = Tracker(21, "Abel");
	DUMP(humankind);

	std::cout << "Append item beyond capacity\n";
	humankind.emplace_back(22, "Oppenheimer");
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

	std::cout << "\ntest2a() done.\n";

	return list;						// Destroy "first".
}

int test2(void)
{
	std::cout << "\ntest2() - testing scope\n\n";

	std::vector<Tracker> myList = test2a();	// Move
	DUMP(myList);

	std::cout << "\ntest2() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test3(void)
{
	std::cout << "\ntest3() - testing loop scope\n\n";

	Tracker a{30, "Adam"};
	int i = 3;
	while (i)
	{
		Tracker b{30 + i, "Ben"};
		i--;
	}

	for (int i = 0; i < 2; ++i)
	{
		Tracker c{30 + i, "Chuck"};
	}

	std::cout << "\ntest3() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test4(void)
{
	std::cout << "\ntest4() - array test\n\n";

	Tracker a{40, "Larry"};
	Tracker stooges[3];
	stooges[0] = a;
	stooges[1] = {41, "Curly"};
	stooges[2] = {42, "Moe"};
	DUMPARRAY(stooges);

	std::cout << "Replace item 1\n";
	stooges[1] = Tracker(43, "Shemp");
	DUMPARRAY(stooges);

	std::cout << "Initialise array\n";
	Tracker bonds[] = {
		{ 44, "Connery" },
		{ 45, "Lazenby" },
		{ 46, "Moore" },
		{ 47, "Dalton" },
		{ 48, "Brosnan" },
		{ 49, "Craig" },
	};
	DUMPARRAY(bonds);

	std::cout << "\ntest4() done.\n";

	return 0;
}


///////////////////////////////////////////////////////////////////////////////

int test5a(Coll<Tracker, TrackerOps> & coll)
{
	std::cout << "\ntest5a() - Coll test\n\n";

	std::cout << "Building data.\n";
	std::vector<Tracker> vals{
		{ 50, "zero" },
		{ 51, "one" },
		{ 52, "two" },
	};
	std::cout << "Collecting data.\n";
	for (auto &val : vals)
	{
		std::cout << "Inserting " << val << std::endl;

		coll.insert(val);
	}
	// coll.add({ 50, "zero" });
	// coll.add({ 51, "one" });
	// coll.add({ 52, "two" });

	std::cout << "Loading data.\n";
	coll.loaded();
	std::cout << "Data loaded.\n";

	std::cout << "\ntest5a() done.\n";

	return 0;
}

int test5(void)
{
	std::cout << "\ntest5() - Coll test\n\n";

	Coll<Tracker, TrackerOps> coll;
	test5a(coll);
	std::cout << "\n";
	std::cout << "Data collected.\n";
	coll.display();
	std::cout << "\n";

	std::cout << "test5() done." << std::endl;

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
	const int first{ELEMENT_INDEX_FIRST};
	const int last{ELEMENT_KNOWN_COUNT};
	// const int last{20};
	const element_conf_t ** ElementConf = &ElementConfigurations[first];
	for (int i = first; i <= last; ++i, ++ElementConf)
	{
		const ElementPtr element_ptr = std::make_shared<Element_c>(*ElementConf);
		coll.insert(element_ptr);
	}

	coll.loaded();
	std::cout << "coll loaded\n";
}

int test6a(void)
{
	std::cout << "\ntest6a() - set test\n\n";

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
		myColl.insert(item);
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
	std::cout << "\ntest6() - set test\n\n";
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

int main(int argc, char *argv[])
{
	std::cout << "main()\n\n";
	for (int i{1}; i < argc; ++i)
	{
		const int t{atoi(argv[i])};
		switch (t)
		{
		case 0:	test0();	break;
		case 1:	test1();	break;
		case 2:	test2();	break;
		case 3:	test3();	break;
		case 4:	test4();	break;
		case 5:	test5();	break;
		case 6:	test6();	break;
		
		default:
			std::cerr << argv[i] << " not found!";
			break;
		}
	}

	std::cout << "\ncoll display():\n";
	coll.display(ElementOps());
	std::cout << "\n";

	std::cout << "\nmain() done.\n";

	return 0;
}
