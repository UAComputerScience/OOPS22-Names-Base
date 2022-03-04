/*
    Name.hpp

    Declarations for multi-part names class
*/

#ifndef INCLUDED_NAME_HPP
#define INCLUDED_NAME_HPP

#include <iostream>
#include <string>
#include <string_view>

class Name {
public:

    // first, middle, and last name constructor
    Name(std::string_view firstName, std::string_view middleName, std::string_view lastName);

    // first and last name constructor
    Name(std::string_view firstName, std::string_view lastName);

    // last name constructor
    Name(std::string_view lastName);

    // first name
    std::string first() const;

    // middle name
    std::string middle() const;

    // last name
    std::string last() const;

    // output the name, single space between the parts of the name
    std::ostream& output(std::ostream& out) const;

private:
    std::string firstName;
    bool hasFirstName = false;
    std::string middleName;
    bool hasMiddleName = false;
    std::string lastName;
    bool hasLastName = false;
};

#endif
