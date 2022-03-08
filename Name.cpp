/*
    Name.cpp

    Definitions for multi-part name class
*/

#include "Name.hpp"

// first, middle, and last name constructor
Name::Name(std::string_view firstName, std::string_view middleName, std::string_view lastName)
    : firstName(firstName), hasFirstName(true),
      middleName(middleName), hasMiddleName(true),
      lastName(lastName), hasLastName(true)
    {}

// first and last name constructor
Name::Name(std::string_view firstName, std::string_view lastName)
    : firstName(firstName), hasFirstName(true),
      lastName(lastName), hasLastName(true)
    {}

// last name constructor
Name::Name(std::string_view lastName)
    : lastName(lastName), hasLastName(true)
    {}

// first name
std::string Name::first() const {

    return firstName;
}

// middle name
std::string Name::middle() const {

    return middleName;
}

// last name
std::string Name::last() const {

    return lastName;
}

// output the name, single space between the parts of the name
std::ostream& Name::output(std::ostream& out) const {

    // output first name if it exists
    bool prevName = false;
    if (hasFirstName) {
        out << firstName;
        prevName = true;
    }

    // output middle name if it exists
    if (hasMiddleName) {
        if (prevName)
            out << " ";
        out << middleName;
        prevName = true;
    }

    // output last name if it exists
    if (hasLastName) {
        if (prevName)
            out << " ";
        out << lastName;
    }

    return out;
}
