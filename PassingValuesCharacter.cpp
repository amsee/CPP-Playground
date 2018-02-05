// import library
#include <iostream>
using namespace std;

// local variable definition
void word(char &a, char &b); // make a copy of a

// main function
int main()
{
  // define variable
  char a, b;
  
  // ask for first character
  cout << "First Letter: " << endl;
  cin >> a;

  // ask for second character
  cout << "Second Letter: " << endl;
  cin >> b;

  // output
  cout << "=== BEFORE WORD SWITCH ===" << endl;
  cout << "Your first letter is: " << a << " and your second letter is: " << b << endl;
  
  // word swap function
  word(a, b);

  cout << "=== AFTER WORD SWITCH ===" << endl;
  cout <<  "Your first letter is now = " << a << " Your second letter is now = " << b << endl;

  return 0;
}

void word(char &a, char &b)
{
  // define variables
  char temp = a;
  a = b; 
  b = temp;
}

