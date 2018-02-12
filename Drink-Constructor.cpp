#include <iostream>
using namespace std;

class Drink
{
    private:
        char size;
        int price;
    public:                     //? initialize variables to null
        Drink()
        {
            char size = 0;
            price = 0;
        }
        Drink(const char* s, int p) //? assign/set variables
        {
            strcpy(size, s);
            price = p;
        }
    void get_size(void) const           //? get/display information
        {
            cout << "What size tea?: " << size << endl;
        }
    void get_price(void) const
        {
            cout << "What is Price?: " << price << endl;
        }
};
int main(void)
{
    Drink warm;
    Drink cold;

    warm.get_size();
    cold.get_price();
}