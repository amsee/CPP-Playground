#include <iostream>
#include <cstring>
using namespace std;

class Drink
{
    private:
        int price;
        char size;
    public:
        Drink()           //todo PARAMETER CONTSRUCTOR
        {
            price = 0;
            size[0] = '\0'
        }
    Drink(int p, const char* s) //todo DEFAULT CONSTRUCTOR 
    {
        price = p;
        strcpy(size, s);
    }
    void GetInfo() const
    {
        cout << "Enter Price: " << price << endl;
        cout << "Enter Size: " << size << endl;
    }
};
int main(void)
{
    Drink cold;               // todo CALL DEFAULT CONSTRUCTOR
    Drink warm(3, 's');       // todo CALL PARAMETER CONSTRUCTOR

    cold.GetInfo();
    warm.GetInfo();

    return 0;
}   
