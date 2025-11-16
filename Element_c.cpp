// Element_c.cpp: implementation of the Element_c class.
//
//////////////////////////////////////////////////////////////////////

#include <sstream>
#include "Element_c.h"


Element_c::Element_c(const element_conf_t * data)
{
	Z = data->Z;
	symbol = data->Symbol;
	name = data->Name;
	group = data->Group;
	group32 = data->Group32;
	period = data->Period;
	atomicWeight = data->AtomicWeight;
	density = data->Density;
	melt = data->Melt;
	boil = data->Boil;
	C = data->C;
	X = data->X;
	abundance = data->Abundance;
	subcategory = data->Subcategory;

	addGenElectronConfigCounts(data->GenElectronConfigSize, data->GenElectronConfigCounts);
	addElectronConfigurationCounts(data->ElectronConfigurationSize, data->ElectronConfigurationCounts);
	addElectronSubshellCounts(data->ElectronSubshellSize, data->ElectronSubshellCounts);
	addElectronShellCounts(data->ElectronShellSize, data->ElectronShellCounts);

	reveal("constructed from element_conf_t");
}

// Default constructor.
Element_c::Element_c(void) :
	Z{},
	symbol{},
	name{},
	nameOrigin{},
	group{},
	group32{},
	period{},
	atomicWeight{},
	density{},
	melt{},
	boil{},
	C{},
	X{},
	abundance{},
	subcategory{}
{
	reveal("default constructed");
}

// Copy constructor.
Element_c::Element_c(const Element_c & data) :
	Z			{data.Z},
	symbol		{data.symbol},
	name		{data.name},
	group		{data.group},
	group32		{data.group32},
	period		{data.period},
	atomicWeight{data.atomicWeight},
	density		{data.density},
	melt		{data.melt},
	boil		{data.boil},
	C			{data.C},
	X			{data.X},
	abundance	{data.abundance},
	subcategory	{data.subcategory},

	GenElectronConfigCounts		{data.GenElectronConfigCounts},
	ElectronConfigurationCounts	{data.ElectronConfigurationCounts},
	ElectronSubshellCounts		{data.ElectronSubshellCounts},
	ElectronShellCounts			{data.ElectronShellCounts}
{
	reveal("copy constructed");
}

// Copy assignment.
void Element_c::operator=(const Element_c & data)
{
	Z			= data.Z;
	symbol		= data.symbol;
	name		= data.name;
	group		= data.group;
	group32		= data.group32;
	period		= data.period;
	atomicWeight = data.atomicWeight;
	density		= data.density;
	melt		= data.melt;
	boil		= data.boil;
	C			= data.C;
	X			= data.X;
	abundance	= data.abundance;
	subcategory	= data.subcategory;

	GenElectronConfigCounts		= data.GenElectronConfigCounts;
	ElectronConfigurationCounts	= data.ElectronConfigurationCounts;
	ElectronSubshellCounts		= data.ElectronSubshellCounts;
	ElectronShellCounts			= data.ElectronShellCounts;

	reveal("copy assigned");
}

// Move constructor.
Element_c::Element_c(Element_c && data) noexcept :
	Z			{data.Z},
	symbol		{std::move(data.symbol)},
	name		{std::move(data.name)},
	group		{data.group},
	group32		{data.group32},
	period		{data.period},
	atomicWeight{data.atomicWeight},
	density		{data.density},
	melt		{data.melt},
	boil		{data.boil},
	C			{data.C},
	X			{data.X},
	abundance	{data.abundance},
	subcategory	{data.subcategory},

	GenElectronConfigCounts		{std::move(data.GenElectronConfigCounts)},
	ElectronConfigurationCounts	{std::move(data.ElectronConfigurationCounts)},
	ElectronSubshellCounts		{std::move(data.ElectronSubshellCounts)},
	ElectronShellCounts			{std::move(data.ElectronShellCounts)}
{
	reveal("Move constructed");
}

// Move assignment.
void Element_c::operator=(Element_c && data) noexcept
{
	Z			= data.Z;
	symbol		= std::move(data.symbol);
	name		= std::move(data.name);
	group		= data.group;
	group32		= data.group32;
	period		= data.period;
	atomicWeight = data.atomicWeight;
	density		= data.density;
	melt		= data.melt;
	boil		= data.boil;
	C			= data.C;
	X			= data.X;
	abundance	= data.abundance;
	subcategory	= data.subcategory;

	GenElectronConfigCounts		= std::move(data.GenElectronConfigCounts);
	ElectronConfigurationCounts	= std::move(data.ElectronConfigurationCounts);
	ElectronSubshellCounts		= std::move(data.ElectronSubshellCounts);
	ElectronShellCounts			= std::move(data.ElectronShellCounts);

	reveal("Move assigned");
}


bool Element_c::addGenElectronConfigCounts(const size_t Size, const short * Counts)
{
	GenElectronConfigCounts.reserve(Size);
	for (int i = 0; i < Size; ++i, ++Counts)
	{
		GenElectronConfigCounts.push_back(int(*Counts));
	}

	return true;
}

bool Element_c::addElectronConfigurationCounts(const size_t Size, const short * Counts)
{
	ElectronConfigurationCounts.reserve(Size);
	for (int i = 0; i < Size; ++i, ++Counts)
	{
		ElectronConfigurationCounts.push_back(int(*Counts));
	}

	return true;
}

bool Element_c::addElectronSubshellCounts(const size_t Size, const short * Counts)
{
	ElectronSubshellCounts.reserve(Size);
	for (int i = 0; i < Size; ++i, ++Counts)
	{
		ElectronSubshellCounts.push_back(int(*Counts));
	}

	return true;
}

bool Element_c::addElectronShellCounts(const size_t Size, const short * Counts)
{
	ElectronShellCounts.reserve(Size);
	for (int i = 0; i < Size; ++i, ++Counts)
	{
		ElectronShellCounts.push_back(int(*Counts));
	}

	return true;
}


int Element_c::getGenElectronConfigCount(size_t index) const
{
	const auto sz = GenElectronConfigCounts.size();
	if (index >= sz)
	{
		return -1;
	}
	
	return GenElectronConfigCounts[index];
}

int Element_c::getElectronConfigurationCount(size_t index) const
{
	const auto sz = ElectronConfigurationCounts.size();
	if (index >= sz)
	{
		return -1;
	}
	
	return ElectronConfigurationCounts[index];
}

int Element_c::getElectronSubshellCount(size_t index) const
{
	const auto sz = ElectronSubshellCounts.size();
	if (index >= sz)
	{
		return -1;
	}
	
	return ElectronSubshellCounts[index];
}

int Element_c::getElectronShellCount(size_t index) const
{
	const auto sz = ElectronShellCounts.size();
	if (index >= sz)
	{
		return -1;
	}
	
	return ElectronShellCounts[index];
}


bool Element_c::getGenElectronConfigCount(int & index) const
{
	const auto sz = GenElectronConfigCounts.size();
	if (index >= sz)
	{
		return false;
	}
	
	index = GenElectronConfigCounts[index];

	return true;
}

bool Element_c::getElectronConfigurationCount(int & index) const
{
	const auto sz = ElectronConfigurationCounts.size();
	if (index >= sz)
	{
		return false;
	}
	
	index = ElectronConfigurationCounts[index];

	return true;
}

bool Element_c::getElectronSubshellCount(int & index) const
{
	const auto sz = ElectronSubshellCounts.size();
	if (index >= sz)
	{
		return false;
	}
	
	index = ElectronSubshellCounts[index];

	return true;
}

bool Element_c::getElectronShellCount(int & index) const
{
	const auto sz = ElectronShellCounts.size();
	if (index >= sz)
	{
		return false;
	}
	
	index = ElectronShellCounts[index];

	return true;
}


std::string stringy(const std::vector<int> & list)
{
	const size_t size = list.size();
	if (size < 1)
		return "";

	auto ii = list.begin();
	std::stringstream ss;
	ss << (*ii);
	for (++ii; ii != list.end(); ++ii)
		ss << ", " << (*ii);

	return ss.str();
}
void Element_c::genInit(std::ostream &os) const
{
	os << "{\n";
	os << "\t" << Z << ",\t\"" << symbol << "\",\t\"" << name << "\",\n";
	os << "\t" << group << ",\t"  << group32 << ",\t"  << period << ",\n";
	os << "\t" << atomicWeight << ",\t"  << density << ",\n";
	os << "\t" << melt << ",\t"  << boil << ",\n";
	os << "\t" << C << ",\t"  << X << ",\n";
	os << "\t" << abundance << ",\n";
	os << "\t" << subcategory << ",\n";
	os << "\t{ " << stringy(GenElectronConfigCounts) << " },\n";
	os << "\t{ " << stringy(ElectronConfigurationCounts) << " },\n";
	os << "\t{ " << stringy(ElectronSubshellCounts) << " },\n";
	os << "\t{ " << stringy(ElectronShellCounts) << " },\n";
	os << "},\n";
}

std::string Element_c::getName(const size_t length) const
{
    const std::string padding(length - name.length(), ' ');
	std::stringstream ss;
	ss << name << " " << padding;

	return ss.str();
}



#if 0

///////////////////////////////////////////////////////////////////////////////
// Test point
///////////////////////////////////////////////////////////////////////////////

int main(int argc, char * argv[])
{
	cout << "argc " << argc << endl;
	for (int i = 1; i < argc; ++i)
		cout << "\t" << argv[i] << endl;
	
	
	return 0;
}
#endif
