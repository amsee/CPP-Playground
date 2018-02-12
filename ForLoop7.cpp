#include <iostream>
#include <cstring>
using namespace std;

class Coffee
{
    private:
        char cup[1];
        int price;
    public:
        void set(const char *cu, int pr)
        {
            strcpy(cup, cu);
            price = pr;
        }
        void get() const
        {
            cout << "Cup Size: " << cup << endl;
            cout << "Drink Price: " << price << endl; 
        }
};
int main()
{
    Coffee *drinks = nullptr;
    int size = 0;
    cout << "How many cups of coffee would you like to have? " << endl;
    cin >> size;
    cout << "Okay, got it. " << size << " cups of coffees coming up." << endl;
    drinks = new Coffee[size];

    for(int c = 0; c < size; c++)
    {
        char cup[1];
        int price;
        cout << "=======Please Select Size======" << endl;
        cout << "~~~~~~[ S, M, L]~~~~~~~" << endl;
        cout << "Please enter cup size: " << endl;
        cin >> cup;

        cout << "=======Price Below======" << endl;
        cout << "~~~~~~$$$$$$$$$$$~~~~~~" << endl;
        cin >> price;

        drinks[c].set(cup, price);
        cout << "Size Entered." << endl;
    }

for(int c = 0; c < size; c++)
{
    drinks[c].get();
    cout << "Price Entered." << endl;
    cout << "Enjoy your Coffee!!! :D" << endl; 
}
    return 0;
}