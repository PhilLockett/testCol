/**
 * @file    Tracker.h
 * @author  Phil Lockett <phillockett65@gmail.com>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * https://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * Interface for the Tracker class.
 */

#if !defined(_TRACKER_H__20231208_1140__INCLUDED_)
#define _TRACKER_H__20231208_1140__INCLUDED_

#include <iostream>
#include <ios>
#include <string>


/**
 * @section Tracker class.
 *
 * Implementation of the Tracker class.
 */


class Tracker
{
private:
	int id;
	int count;
	std::string name;

	void reveal(const std::string & action) const
	{
		std::cout << *this << " " << action << std::endl;
	}

	void display(std::ostream & os) const
	{
		os << id << " " << count << " - '" << name << "'";
	}

public:
    friend std::ostream & operator<<(std::ostream &os, const Tracker &A)
	{
		A.display(os);
        
        return os;
	}

    int compare(const Tracker & rhs) const
	{
		if (const int diff{id - rhs.id}; diff != 0) return diff;

		if (const int res{name.compare(rhs.name)}; res != 0) return res;

		return count - rhs.count;
	}
	bool operator<(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) < 0};
		std::cout << std::boolalpha << "compare(" << *this << ", " << rhs << ") < 0 " << comp << std::endl;
		return comp;
	}
	bool operator>(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) > 0};
		std::cout << std::boolalpha << "compare(" << *this << ", " << rhs << ") > 0 " << comp << std::endl;
		return comp;
	}
	bool operator==(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) == 0};
		std::cout << std::boolalpha << "compare(" << *this << ", " << rhs << ") == 0 " << comp << std::endl;
		return comp;
	}
	bool operator!=(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) != 0};
		std::cout << std::boolalpha << "compare(" << *this << ", " << rhs << ") != 0 " << comp << std::endl;
		return comp;
	}

	// Constructor.
	Tracker(int i, std::string n) : id{i}, count{}, name{n}
	{
		reveal("constructed");
	}


/*
 Rule of 6:
    a default constructor: X()
    a copy constructor: X(const X&)
    a copy assignment: operator=(const X&)
    a move constructor: X(X&&)
    a move assignment: operator=(X&&)
    a destructor: ~X()
 */

	// Default constructor.
	Tracker(void) : id{}, count{}, name{"EMPTY"}
	{
		reveal("default constructed");
	}

	// Copy constructor.
	Tracker(const Tracker & b) : id(b.id), count{b.count+1}, name(b.name)
	{
		reveal("copy constructed");
	}

	// Copy assignment.
	void operator=(const Tracker & b)
	{
		id = b.id;
		count = b.count+1;
		name = b.name;
		reveal("copy assigned");
	}

	// Move constructor.
	Tracker(Tracker && b) noexcept : id(b.id), count{b.count+1}, name(std::move(b.name))
	{
		reveal("move constructed");
	}

	// Move assignment.
	void operator=(Tracker && b) noexcept
	{
		id = b.id;
		count = b.count+1;
		name = std::move(b.name);
		reveal("move assigned");
	}

	// Destructor.
	virtual ~Tracker()
	{
		reveal("destroyed");
	}

};

struct TrackerOps
{
	bool operator()(const Tracker & lhs, const Tracker & rhs) const
	{
		std::cout << std::boolalpha << lhs << " < " << rhs << " -> " << (lhs < rhs) << "\n";
		return lhs < rhs;
	}

	void operator()(const Tracker & a) const
	{
		std::cout << a << std::endl;
	}
};


#endif // !defined(_TRACKER_H__20231208_1140__INCLUDED_)
