// import library
#include <iostream>
using namespace std;
// create class
class Person
{
    // class properties

  private:
    int hands;
    int feet;
    // class functions

  public:
    void fingers();
    void toes();

};
// main function
int main()
{
    Person mouse;
    mouse.fingers();
    mouse.toes();

    return 0;
}