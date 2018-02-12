// * include library
// * standard lib
#include <iostream>
// * c string lib
#include <cstring>

using namespace std;

// Create Class called Person
class Person
{
    // * list properties
    private:
        int eyes;
        int feet;
        char name[10];

    // * list constructors
    public:
    // Default eyes and feet to empty states (0 or null)
        Person()
        {
            eyes = 0;
            feet = 0;
            name[0] = '\0'; // set name to be empty
        }

    // Default eyes and feet based on passed values
    Person(int e, int f, const char* n)
    {
        eyes = e;
        feet = f;
        strcpy(name, n);  // copy the value of n to name
    }

    // Display information about the object
    void get(void) const
    {
        // NOTE: bob is empty because it's set to null
        cout << "My name is: [" << name << "]" << endl;
        cout << "I have [" << eyes << "] eyes" << endl;
        cout << "I have [" << feet << "] feet" << endl;
    }
};

int main(void)
{
    // Create an object using class
    Person bob;         // * Calls default constructor - Person()
    Person mark(2, 2, "Mark");  // * Calls parameter constructor - Person(int e, int f)

    bob.get();
    mark.get();

    return 0;
}