# testCol
Test code for checking the `Coll` (collection) template.

**USE AT OWN RISK.**

## Overview
`Coll` is wholly defined in coll.h as a template. The file test.cpp shows 
multiple examples of ways to use it.

## Usage
`Coll` collects together a number of objects, filters out duplicates and indexes 
them.
Once indexed, objects can be accessed either by the object to get it's index 
or by it's index to get the object.

For large objects the use of std::shared_ptr is highly recommended.
Use of a std::shared_ptr will require a Compare function object to dereference 
the pointer.

    // Declare collection.
    Coll words;

    // Fill collection.
    words.add("Apple");       // Copy object into collection.
    words.insert("Banana");   // Move object into collection.
    .
    .
    .
    words.loaded();           // All data added.

    // Iterate over collection if necessary.
    for (const auto &word : words)
    {
        // Process data.
    }

    // Access collection.
    const auto index{words.getIndex("Apple")};
    const auto & word{words[1]};

## Cloning and Running
To clone, build and run this code, execute the following unix/linux commands:

    git clone https://github.com/PhilLockett/testCol.git
    cd testCol/
    make
    ./test <int> [<int>...]

## Points of interest
This code has the following points of interest:

  * `Coll` is implemented as a template.
  * Templates only require a single (header) file.
  * Uses the class `Tracker` to highlight key actions.
  * `Tracker` tracks object construction, copying, moving and destruction.
  * A compare function, compatible with std::set, can be specified.
  * The compare function defaults to std::less.
  * The object type defaults to std::string.
  * `Tracker` also provides and tracks the comparison operators <, >, == and !=.
