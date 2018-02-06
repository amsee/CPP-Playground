// import library
#include <iostream>
using namespace std;

// create class
class Person
{
// class properties
// public/private

private:
    int hands;
    int feet;

// class functions
public:
    void fingers()
    {
        cout << "Sticky Hands" << endl;
    }
    void toes()
    {
        cout << "Sickie Feet" << endl;
    }
};
// main function
int main()
{
    Person mouse;
    mouse.fingers();
    mouse.toes();

    return 0;
}
