#include <iostream>
using namespace std;

// Declare Class
class Animal
{
private:// Animal Properties
  int eyes;
  int feet;

public:
  // get information about Animal 
  void get() const
  {
    //   display information to user
    cout << "This animal has " << e << "eyes.";
    cout << "This animal has " << f << "feet";
  }

  // function to manually set values for the Animal
  void set(int userInputEyes, int userInputFeet)
  {
    // set the number of eyes
    eyes = userInputEyes;

    // set the number of feet
    feet = userInputFeet;
  }
};

int main(void)
{
  // 1. We're going to be dynamically creating animals
  // Dynamic Allocation - When the program asks the user first for a number so that we can declare that many instances of the Class
  // i.e
  // if we ask the user "How many animals do you want to create?". Let's say the user says he wants to create 2.
  // We will store 2 in a variable. Let's say the variable is called "size". We will say cin >> size; // 2
  // Python: size = raw_input("How many animals do you want to create?")

  // declare a variable for size
  int size = 0;

  // create a pointer for the Class
  // nullptr means "let the pointer have no value, not even an initial value. Just null"
  Animal *animal = nullptr;

  // We then ask the user how many animals he wants to create
  cout << "How many animals do you want to create?: ";

  // put the user input in size
  cin >> size;

  // Just like with arrays, we then create an array that is "size" big (if user says size = 2, array of 2 sizes)
  animal = new Animal[size];


  // THAT'S IT FOR NOW.
  return 0;

}
