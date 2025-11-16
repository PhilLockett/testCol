// Element_c.h: interface for the IPFIX Template class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ELEMENTS_C_H__20190522_1645_8548_52BFEECA4729__INCLUDED_)
#define AFX_ELEMENTS_C_H__20190522_1645_8548_52BFEECA4729__INCLUDED_

#include <iostream>
#include <string>
#include <vector>

#include "electronconfigs.h"

#define ELEMENTS(A) ((sizeof(A))/(sizeof(A[0])))

class Element_c
{
private:
    int		Z;
    std::string	symbol;
    std::string	name;
    std::string	nameOrigin;
    int		group;
    int		group32;
    int		period;
    float	atomicWeight;
    float	density;
    float	melt;
    float	boil;
    float	C;
    float	X;
    float	abundance;
    int		subcategory;

    std::vector	<int> GenElectronConfigCounts;
    std::vector	<int> ElectronConfigurationCounts;
    std::vector	<int> ElectronSubshellCounts;
    std::vector	<int> ElectronShellCounts;

	void reveal(const std::string & action) const
	{
		std::cout << *this << " " << action << std::endl;
	}

	void display(std::ostream & os) const
	{
		os << Z << " " << symbol << " - '" << name << "'";
	}


public:
    Element_c(const element_conf_t * data);

    int		getZ(void) const { return Z; }
    std::string getName(const size_t length = 13) const;
    const std::string & getSymbol(void) const { return symbol; }
    const std::string & getElement(void) const { return name; }
    const std::string & getNameOrigin(void) const { return nameOrigin; }
    int		getGroup(void) const { return group; }
    int		getGroup32(void) const { return group32; }
    int		getPeriod(void) const { return period; }
    int		getIndex(void) const { return (group32 * 10) + period; }
    float	getAtomicWeight(void) const { return atomicWeight; }
    float	getDensity(void) const { return density; }
    float	getMelt(void) const { return melt; }
    float	getBoil(void) const { return boil; }
    float	getC(void) const { return C; }
    float	getX(void) const { return X; }
    float	getAbundance(void) const { return abundance; }

    int		getGenElectronConfigCount(size_t index) const;
    int		getElectronConfigurationCount(size_t index) const;
    int		getElectronSubshellCount(size_t index) const;
    int		getElectronShellCount(size_t index) const;

    bool    getGenElectronConfigCount(int & index) const;
    bool    getElectronConfigurationCount(int & index) const;
    bool    getElectronSubshellCount(int & index) const;
    bool    getElectronShellCount(int & index) const;

    void	setName(const std::string & v) { name = v; }

    void    genInit(std::ostream &os) const;


    friend std::ostream & operator<<(std::ostream &os, const Element_c &A)
	{
		A.display(os);
        
        return os;
	}

    int compare(const Element_c & rhs) const { return getZ() - rhs.getZ(); }
	bool operator<(const Element_c & rhs) const { return compare(rhs) < 0; }
	bool operator>(const Element_c & rhs) const { return compare(rhs) > 0; }
	bool operator==(const Element_c & rhs) const { return compare(rhs) == 0; }
	bool operator!=(const Element_c & rhs) const { return compare(rhs) != 0; }

/*
 Rule of 6:
    a default constructor:  X()
    a copy constructor:     X(const X&)
    a copy assignment:      operator=(const X&)
    a move constructor:     X(X&&)
    a move assignment:      operator=(X&&)
    a destructor:           ~X()
 */

    Element_c(void);                                // Default constructor.
    Element_c(const Element_c & data);              // Copy constructor.
    void operator=(const Element_c & data);         // Copy assignment.
    Element_c(Element_c && data) noexcept;          // Move constructor.
    void operator=(Element_c && data) noexcept;     // Move assignment.
    virtual ~Element_c(void)                        // Destructor.
    {
        reveal("destroyed");
    }


private:
    void	setZ(int v) { Z = v; }
    void	setSymbol(const std::string & v) { symbol = v; }
    void	setElement(const std::string & v) { name = v; }
    void	setNameOrigin(const std::string & v) { nameOrigin = v; }
    void	setGroup(int v) { group = v; }
    void	setGroup32(int v) { group32 = v; }
    void	setPeriod(int v) { period = v; }
    void	setAtomicWeight(float v) { atomicWeight = v; }
    void	setDensity(float v) { density = v; }
    void	setMelt(float v) { melt = v; }
    void	setBoil(float v) { boil = v; }
    void	setC(float v) { C = v; }
    void	setX(float v) { X = v; }
    void	setAbundance(float v) { abundance = v; }

    bool    addGenElectronConfigCounts(const size_t Size, const short * Counts);
    bool    addElectronConfigurationCounts(const size_t Size, const short * Counts);
    bool    addElectronSubshellCounts(const size_t Size, const short * Counts);
    bool    addElectronShellCounts(const size_t Size, const short * Counts);

};


#endif // !defined(AFX_ELEMENTS_C_H__20190522_1645_8548_52BFEECA4729__INCLUDED_)
