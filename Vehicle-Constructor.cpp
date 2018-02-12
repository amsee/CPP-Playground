// INCOMPLETE
// ++++USER INPUT


// todo import library 
//  * import standard io library
#include <iostream>
// * import c-string library
#include <cstring>
using namespace std;

// ! Start of Class.
// todo create class
// ! =======================================================
class Vehicle
// todo list properties
{
    // * list qualities of class Vehicle [3]
    private:
        char model[30];
        int wheels;
        int year;
// todo list constructors  
    public:
// todo set variables to null
    Vehicle()
    {
    // * initiate variables to null   
        model[0] = '\0';
        wheels = 0;
        year = 0; 
    }
// todo pass values 
    Vehicle(const char* m, int w, int y)
    {
        strcpy(model, m);
        wheels = w;
        year = y;
    }
// todo display information
    void getModel() const
    {
        cout << "Provide Model: " << model << endl;
    }
    void getWheels() const
    {
        cout << "Provide Wheels: " << wheels << endl;
    }
    void getYear() const
    {
        cout << "Provide Year: " << year << endl;
    }
}; 
// ! =======================================================
// ! End of Class.
// ! Start of Main.
// todo create main
// ! =======================================================
int main(void)
{
    Vehicle mm;
    Vehicle ww;
    Vehicle yy;

    mm.getModel();
    ww.getWheels();
    yy.getYear();
  
    return 0;
// ! =======================================================    
// ! End of Main. 
}
