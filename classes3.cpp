// import library
#include <iostream>
using namespace std;

// define class
class Frog
{
private:
// list properties
    int spots;
    int webs;

// list functions
public: 
    void jump()
    {
        cout << "This frog jumps." << endl;
    }
    void fly()
    {
        cout << "This frog can fly." << endl;
    }
};


// main functions
int main()
{ 
    Frog super;
    super.jump();
    super.fly();

    return 0;
}