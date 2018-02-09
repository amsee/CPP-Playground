// * import standard library
#include <iostream>

// * import cstring library
#include <cstring>

using namespace std;


// todo 1. Flavour/Price
// todo 2. Flavour? Chocolate; Price? 1.00
// todo3 3. Display all cookies (Flavour/Price)

// todo Make class Cookie
class Cookies
{
    // * list class properties
  private:
    char CookieType[10];
    int CookieAmount;

    // * list class functions
  public:
    // todo Display information about cookies
    void display_information() const
    {
        cout << "Cookie Type = " << CookieType << endl;
        cout << "Amount of Cookies = " << CookieAmount << endl;
    }
    // todo set variables for class
    // * assign variables
    void set(const char *UItype, int UIamount)
    {
        strcpy(CookieType, UItype); //! strcpy for strings only
        CookieAmount = UIamount;
    }
};
int main()
{
    // * initiate variable
    int size = 0;
    // * set nullpointer
    Cookies *cookies = nullptr;
    // * output to user
    cout << "How many cookies do you want?" << endl;
    cin >> size;
    cout << "We will give you " << size << " cookies." << endl;
    // * create an array
    cookies = new Cookies[size];

    // todo SETTING information for each object
    // * for(initialize; condition; increment)

    cout << "===== ENTER INFORMATION ABOUT COOKIES =====" << endl;

    for (int i = 0; i < size; i++)
    {
        // * define temp variables
        char CookieType[10];
        int CookieAmount;

        cout << "===== COOKIE # " << i + 1 << " =====" << endl;
        // * ask user for first input (cookie type)
        cout << "Enter Coookie Type = " << endl;
        cin >> CookieType;
        // * ask user for second input (cookie amount)
        cout << "Enter Cookie Amount = " << endl;
        cin >> CookieAmount;
        // todo use set method
        cookies[i].set(CookieType, CookieAmount); // todo -> SET
        cout << "===== FINISHED ENTERING INFORMATION FOR COOKIE " << i + 1 << endl;
    }

    cout << "===== END OF COOKIE INFORMATION =====" << endl;

    // todo FOR DISPLAYING the information for each object
    for (int i = 0; i < size; i++) // ? size == number of objects
    {
      cout << "===" << "Cookie # " << i + 1 << "===" << endl;
      cookies[i].display_information(); // todo -> DISPLAY
    // * return integer
    }
    return 0;
}
