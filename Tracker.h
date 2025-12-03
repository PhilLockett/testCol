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
#define DISPLAY_COMP(oper) std::cout << std::boolalpha << "compare(" << *this << ", " << rhs << ") " << oper << " 0 " << comp << std::endl;
#define REVEAL(action) std::cout << *this << " " << action << std::endl;

private:
	int id;
	int count;
	std::string name;

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
		DISPLAY_COMP("<")

		return comp;
	}
	bool operator>(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) > 0};
		DISPLAY_COMP(">")

		return comp;
	}
	bool operator==(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) == 0};
		DISPLAY_COMP("==")

		return comp;
	}
	bool operator!=(const Tracker& rhs) const
	{
		const bool comp{compare(rhs) != 0};
		DISPLAY_COMP("!=")

		return comp;
	}

	// Constructor.
	Tracker(int i, std::string n) : id{i}, count{}, name{n}
	{
		REVEAL("constructed")
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
		REVEAL("default constructed")
	}

	// Copy constructor.
	Tracker(const Tracker & b) : id(b.id), count{b.count+1}, name(b.name)
	{
		REVEAL("copy constructed")
	}

	// Copy assignment.
	void operator=(const Tracker & b)
	{
		id = b.id;
		count = b.count+1;
		name = b.name;
		REVEAL("copy assigned")
	}

	// Move constructor.
	Tracker(Tracker && b) noexcept : id(b.id), count{b.count+1}, name(std::move(b.name))
	{
		REVEAL("move constructed")
	}

	// Move assignment.
	void operator=(Tracker && b) noexcept
	{
		id = b.id;
		count = b.count+1;
		name = std::move(b.name);
		REVEAL("move assigned")
	}

	// Destructor.
	virtual ~Tracker()
	{
		REVEAL("destroyed")
	}

};


/**
 * @section TrackerOps struct.
 *
 * Implementation of the TrackerOps struct providing some basic operations.
 */

struct TrackerOps
{
	// Uses Tracker::operator<() to sort Tracker objects.
	bool operator()(const Tracker & lhs, const Tracker & rhs) const
	{
		return lhs < rhs;
	}

	// Send to std::cout, useful with for_each().
	void operator()(const Tracker & a) const
	{
		std::cout << a << std::endl;
	}

	// Send to std::cout, used by Coll::display().
	void operator()(size_t i, const Tracker & a) const
    {
		std::cout << i << "\t" << a << "\n";
	}

};


#endif // !defined(_TRACKER_H__20231208_1140__INCLUDED_)
