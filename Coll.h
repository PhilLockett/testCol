/**
 * @file    Coll.h
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
 * Interface for the sorted Collection Implementation.
 */

#if !defined(_COLL_H__20231129_0956__INCLUDED_)
#define _COLL_H__20231129_0956__INCLUDED_

#include <string>
#include <set>
#include <vector>
#include <map>

template<typename T = std::string, class Compare = std::less<T>>
class Coll
{
private:
    std::set<T, Compare> _set;
    std::vector<T> _vector;
    std::map<T, size_t, Compare> _map;

public:
    Coll() : _set{}, _vector{}, _map{} {}
    // virtual ~Coll() {}

    typename std::set<T, Compare>::iterator insert(const T & target);
    typename std::set<T, Compare>::iterator insert(T & target);

    void loaded(void);
    void clear(void) { _set.clear(); _vector.clear(); _map.clear(); }

    bool isContained(const T & item) const { return _map.contains(item); }
    bool isIndex(size_t index) const { return index >= _vector.size(); }

    size_t getIndex(const T & item) const { return _map.at(item); }
    const T & getValue(size_t index) const { return _vector.at(index); }

    const T & operator[](size_t index) const { return _vector[index]; }

    size_t size(void) const { return _vector.size(); }

    using CIterator = typename std::vector<T>::const_iterator;
    const CIterator begin(void) const { return _vector.begin(); }
    const CIterator end(void) const { return _vector.end(); }

    using Iterator = typename std::vector<T>::iterator;
    Iterator begin(void) { return _vector.begin(); }
    Iterator end(void) { return _vector.end(); }

    size_t display(Compare func) const;
    size_t display(void) const;

};


/**
 * @brief Add an entry to the collection, iff it isn't already present.
 * 
 * @tparam T type of items in the collection.
 * @tparam Compare function object that defines the sorting order.
 * @param target to potentially add to collection
 * @return std::set<T, Compare>::iterator for entry in the collection.
 */
template<typename T, class Compare>
typename std::set<T, Compare>::iterator Coll<T, Compare>::insert(const T & target)
{
    const auto result{_set.insert(target)};

    return result.first;
}

/**
 * @brief Move an entry to the collection, iff it isn't already present.
 * 
 * @tparam T type of items in the collection.
 * @tparam Compare function object that defines the sorting order.
 * @param target to potentially add to collection
 * @return std::set<T, Compare>::iterator for entry in the collection.
 */
template<typename T, class Compare>
typename std::set<T, Compare>::iterator Coll<T, Compare>::insert(T & target)
{
    const auto result{_set.insert(std::move(target))};

    return result.first;
}

/**
 * @brief Called after all entries have been added to the collection.
 * 
 * @tparam T type of items in the collection.
 * @tparam Compare function object that defines the sorting order.
 */
template<typename T, class Compare>
void Coll<T, Compare>::loaded(void)
{
    _map.clear();
    _vector.clear();
    _vector.reserve(_set.size());

    size_t i{};
    for (const T & item : _set)
    {
        _map[item] = i++;
        _vector.push_back(item);
    }
}

/**
 * @brief Display all items in the collection.
 * 
 * @tparam T type of items in the collection.
 * @tparam Compare function object that defines the sorting order.
 * @param func function to call for each item in the collection.
 * @return size_t number of items displayed.
 */
template<typename T, class Compare>
size_t Coll<T, Compare>::display(Compare func) const
{
    size_t i{};
    for (const T & item : _vector)
        func(i++, item);

    return i;
}


/**
 * @brief Display all items in the collection.
 * 
 * @tparam T type of items in the collection.
 * @tparam Compare function object that defines the sorting order.
 * @return size_t number of items displayed.
 */
template<typename T, class Compare>
size_t Coll<T, Compare>::display(void) const
{
    size_t i{};
    for (const auto & item : _vector)
        std::cout << i++ << "\t" << item << "\n";

    return i;
}


#endif // !defined(_COLL_H__20231129_0956__INCLUDED_)
