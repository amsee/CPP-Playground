// temp
#include <iostream>
// include string library
#include <cstring>
using namespace std;

// declare class
class Candy
{
  private: 
    // properties 
    char candyName[30];
    int price;

  public:
    // How to use: candies.get() to get all the information about the candy
    void get() const
    {
        cout << "This candy is called " << candyName << endl;
        cout << "It costs: " << price << endl;
    }

    // How to use: candies.set("Rolo", 3) to set the name and the price of the candy
    void set(const char* cn, int pr) const
    {
        strcpy(candyName, cn);
        price = pr;
    }
};

int main()
{
    Candy *candies = nullptr;
    int size = 0;

    cout << "How many candies do you want to create? ";
    cin >> size;

    candies = new Candy[size]

    return 0;
}
