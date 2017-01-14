#include <iostream>
#include "Person.h"


Person::Person() {}
Person::~Person() {}

const std::string &Person::getFName() const {
    return fName;
}

void Person::setFName(const std::string &fName) {
    Person::fName = fName;
}

const std::string &Person::getLName() const {
    return lName;
}

void Person::setLName(const std::string &lName) {
    Person::lName = lName;
}

const std::string &Person::getSAddress() const {
    return sAddress;
}

void Person::setSAddress(const std::string &sAddress) {
    Person::sAddress = sAddress;
}

const std::string &Person::getCity() const {
    return city;
}

void Person::setCity(const std::string &city) {
    Person::city = city;
}

void Person::setZCode(const string &zCode) {
    Person::zCode = zCode;
}

const string &Person::getZCode() const {
    return zCode;
}
