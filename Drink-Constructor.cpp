#include <iostream>
#include <cstring>
using namespace std;

class Drink
{
    private:
        int price;
        char size[10];
    public:
        Drink()           //todo PARAMETER CONTSRUCTOR
        {
            price = 0;
            size[0] = '\0';
        }
    Drink(int p, const char* s) //todo DEFAULT CONSTRUCTOR 
    {
        price = p;
        strcpy(size, s);
    }
    void getInfo() const
    {
        // todo DISPLAY PROPERTIES
        cout << "Display Price: " << price << endl;
        cout << "Display Size: " << price << endl;
    }
};
int main(void)
{
    Drink cold;               // todo CALL DEFAULT CONSTRUCTOR
    Drink warm(3, "small");       // todo CALL PARAMETER CONSTRUCTOR

    cold.getInfo();
    warm.getInfo();

    return 0;
}   
