#include "Person.h"
#include <iostream>


using namespace std;

int main()
{
    Person joeD;
    joeD.setFName("Joe");
    joeD.setLName("Dickens");
    joeD.setSAddress("15720 Almont Rd");
    joeD.setCity("allenton");
    joeD.setZCode("48002");

    cout <<joeD.getFName()+"\n"+joeD.getLName()+"\n"+joeD.getSAddress()+"\n"+joeD.getCity()+"\n"+joeD.getZCode()<<endl;

    return 0;
}
