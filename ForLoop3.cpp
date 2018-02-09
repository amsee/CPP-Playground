#include <iostream>
#include <cstring>
using namespace std;


class Cookies
{
private:
    char cookietype[10];
    int amount;
public:
    void display_information() const
    {
        cout << "Did you get the soft or hard kind of cookie?" << endl;
        cout << "How many cookies did you get?" << endl;
    }
    void set(const char *type, int num)
    {
        strcpy(cookietype, type);
        amount = num;
    }
};
int main()
{
  // Create Cookies pointer
  Cookies *cookies = nullptr;
  int size = 0;

  // Ask user for information
  cout << "How many cookies do you want to get this year?" << endl;
  cin >> size;

  // Create "size" many cookies
  cookies = new CookieGram[size];

  // For every cookie...
  for(i = 0; i < size; i++) // ? size == number of objects
  {
      // Create a temporary type
      char cookietype[10];

      // Create a temporary amount
      int amount;

      // * Ask information about the current cookie
      cout << "Enter Cookie type -> ";
      cin << cookietype;

      // * ask for client number client
      cout << "Enter Cookie amount -> ";
      cin << amount;

      // ? use set method
      cookies[i].setInfo(cookietype, amount);
      cout << "END OF COOKIE INFORMATION" << i + 1 << endl;
  }

  // Display information about cookies
  for(i = 0; i < size; i++) // ? size == number of objects
  {
      cookies[i].display_information();
  }

  return 0;
}
