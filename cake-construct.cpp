// * import library
#include <iostream>
using namespace std;

// * declare class
class Cake
{
    // * list properties
    private:
        int flour;
        int milk;
        int egg;
    // ! default constructor 
    // * initialize to 0 or null 
    public:
    Cake(void)
    {
        flour = 0;
        milk = 0;
        egg = 0;
    }
    // ! parameter constructor
    // * assign variables
    Cake(int f, int m, int e)
    {
       if(flour == 5) 
       {
           flour = f;
       }
       if(milk == 3)
       {
           milk = m;
       }
       if(egg == 1)
       {
           egg = e;
       }
    }
    // * output information to user
    void DisplayInfo(void) const
    {
        cout << "Cups of flour: " << flour << endl;
        cout << "Cups of milk: " << milk << endl;
        cout << "Amount of Eggs: " << egg << endl;
    }
};
// * declare main function
int main(void)
{
    // * call default constructor
    Cake cupcake;
    // * default parameter constructor
    Cake a(5, 3, 1);

    cout << "LIST INGREDIENTS BELOW " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~ " << endl;

    a.DisplayInfo();

    return 0;
}