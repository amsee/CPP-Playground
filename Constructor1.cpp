// * import standard library
#include <iostream>
// * import c string library
#include <cstring> 
using namespace std;

//todo create class Person
// * Class Start.
class Person 
{
    //todo list properties of class 
    private:
        int eyes;
        int feet;
    // todo list constructors
    public:
        void walk(void)
        {
            cout << "Walking animal." << endl;
        }
        void talk(void)
        {
            cout << "Talking animal." << endl;
        }
        // todo assign values
        // * setting values
        Person(int e, int f) // * job of constructor to set values
        {
            eyes = e;
            feet = f;
        }
        // todo return null
        Person() //* job of constructor is to define variables to null/0.
        {
            eyes = 0;
            feet = 0;
        }
};
// * Class End.

int main(void)
{

    // * Create an object
    Person bob; // calls default constructor
    Person john(2, 2); // calls parameter custructor

    // // * set to nullpointer
    // Person *pp = nullptr;    
    // // * output to user 
    // cout << "How many eyes does the animal have?: " << endl;
    // cin >> e;
    // cout << "Great, so the animal has " << eyes << " eyes." << endl;

    // cout << "How many feet does the animal have?: " << endl;
    // cin >> "Great, so the animal has " << feet << " feet." << endl;

    // * return 0
    return 0;
}