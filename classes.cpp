// CLASS -> blueprint for an object

#include <iostream>
using namespace std;

// basically a huge variable that contains other variables
class Animal
{
    // list properties
    int eyes;
    int nostrils;

    // list functions
  private:
    void blinking()
    {
      cout << "I'm blinking" << endl; << 
    }
    void sniffing()
    {
      cout << "I'm sniffing" << endl; << 
    }
};

// main function
int main()
{
    // Create an animal object
    Animal wolf;
    wolf.blinking();
    wolf.sniffing();

    // return integer
    return 0;
}