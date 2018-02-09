// ? include library
#include <iostream>
using namespace std;

// ? create For loop iterating for each object 
for(i = 0; i < size; i++) // ? size == number of objects 
{
    // ? temporary variables
    char ClientName[40];
    int PhoneNumber;

    // * ask for client name 
    cout << "Enter Client Name -> ";
    cin << ClientName;
    // * ask for client number
    cout << "Enter Client Phone Number -> ";
    cin << PhoneNumber;

    // ? use set method
    client[i].setInfo(ClientName, PhoneNumber);
    cout << "END OF CLIENT INFORMATION" << i + 1 << endl;
}