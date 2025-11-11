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
 * Interface for the Collection Implementation.
 */

#if !defined(_COLL_H__20231129_0956__INCLUDED_)
#define _COLL_H__20231129_0956__INCLUDED_

#include <string>
#include <memory>
#include <set>
#include <vector>
#include <map>

template<typename T=std::string, class C=std::less<T>>
class Coll
{
public:
    Coll() : _set{}, _vector{}, _map{} {}
    // virtual ~Coll() {}

    using P = typename std::shared_ptr<T>;

    typename std::set<P, C>::iterator add(const T & target);

    void loaded(void);

    // bool isContained(const T & item) const { return _map.contains(item); }
    // bool isIndex(size_t index) const { return index >= _vector.size(); }

    // size_t getIndex(const T & item) const { return _map.at(item); }
    // T & getValue(size_t index) { return _vector.at(index); }

    // const T & operator[](size_t index) const { return _vector[index]; }

    size_t size(void) const { return _vector.size(); }

    // using CIterator = typename std::vector<T>::const_iterator;
    // const CIterator begin(void) const { return _vector.begin(); }
    // const CIterator end(void) const { return _vector.end(); }

    // using Iterator = typename std::vector<T>::iterator;
    // Iterator begin(void) { return _vector.begin(); }
    // Iterator end(void) { return _vector.end(); }

    size_t dump(void) const;
    // std::string toString(void) const;

private:
    std::set<P, C> _set;
    std::vector<P> _vector;
    std::map<P, size_t> _map;

};

// template<typename T, class C>
// struct CollOps
// {
//     bool operator()( const Coll<T, C> & a, const Coll<T, C> & b ) const
//         { return a->getZ() < b->getZ(); }
//     void operator()( const Coll<T, C> & a ) const
//         { std::cout << a->getZ() << ' ' << a->getName() << '\n'; }
// };

template<typename T, class C>
typename std::set<typename Coll<T, C>::P, C>::iterator Coll<T, C>::add(const T & target)
{
    P p{std::make_shared<T>(target)};

    auto [result, inserted] = _set.insert(p);

    std::cout << "p.use_count(): " << p.use_count() << '\n';
    return result;
}

template<typename T, class C>
void Coll<T, C>::loaded(void)
{
    _vector.reserve(_set.size());

    size_t i{};
    for (const P & item : _set)
    {
        _vector.push_back(item);
        _map[item] = i++;
    }
}


template<typename T, class C>
size_t Coll<T, C>::dump(void) const
{
    size_t i{};
    for (const P & item : _vector)
        std::cout << i++ << "\t" << *item << "\n";

    std::cout << "\n";

    return i;
}

#endif // !defined(_COLL_H__20231129_0956__INCLUDED_)
