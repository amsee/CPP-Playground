// import library
#include <iostream>
using namespace std;
// declare class
class Animal
{
// declare properties
private:
    int pupils;
    int nostrils; 
// declare functions
public: 
    // display information to user
    void get() const 
    {
        cout << "This animal has " << p << " eyes" << endl;
        cout << "This animal has " << n << " eyes" << endl;
    } 

// set values 
void set(int UIPupil, int UINostrils)
{
    pupils = IUPupil;
    nostrils = UINostrils;
}
};
// main function
int main()
{
    // define variable
    int size = 0;
    // create pointer for class Animal
    Animal *animal = nullptr;
    // user ouput
    cout << "How many animals do you want to create? " << endl;
    // user input
    cin >> size;

    // create array
    animal = new Animal[size];
    // 
    return 0;
}