#pragma once

#include "termios.h"
#include "string"
using namespace std;

class Person
{
private:

    string fName;
    string lName;
    string sAddress;
    string city;
    string zCode;

public:

    Person();
    ~Person();

    const string &getFName() const;

    void setFName(const string &fName);

    const string &getLName() const;

    void setLName(const string &lName);

    const string &getSAddress() const;

    void setSAddress(const string &sAddress);

    const string &getCity() const;

    void setCity(const string &city);

    const string &getZCode() const;

    void setZCode(const string &zCode);

};
