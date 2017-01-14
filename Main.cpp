#include "Person.h"
#include <iostream>


using namespace std;

int main()
{
    Person joeD;
    joeD.setFName("Joe");
    joeD.setLName("Dickens");
    joeD.setSAddress("15720 Almont Rd");
    joeD.setCity("Allenton");
    joeD.setZCode("48002");

    joeD.personSummary();

    return 0;
}
