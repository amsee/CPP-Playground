// *** OUTPUT ***
// I like cheese
// I don't like grapes
//===========================================
// import library
#include <iostream>
using namespace std;
// define class
class Food
{

private: 
    // list properties
    int dairy;
    int fruits;

public:
    // list functions
    void cheese()
    {
        cout << "I like cheese" << endl;
    }
    void grapes()
    {
        cout << "I don't like grapes" << endl;
    }
};

// main function
int main()
{
    Food random;
    random.cheese();
    random.grapes();
    
    return 0;
}