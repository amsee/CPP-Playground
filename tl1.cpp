// todo Vehicle (check if wheels are 2 wheels, 4 wheels or more than 4, if it's 2 wheels, print out motorcycle, if it's 4 print out car, if it's more, print out truck)

#include <iostream>
using namespace std;

class Vehicle
{
    private:
        int wheels;

    public:
    Vehicle(void)
    {
        wheels = 2;
    }
    Vehicle(int w)
    {
        bool valid = w == 4 || w == 3 || w == 2 || w == 1;
        if (w <= 2)
        {
            cout << "Motorcycle" << endl;
        }
        if (w <= 4)
        {
            cout << "Car" << endl;
        }
        else
        {
            cout << "Truck" << endl;
        }
        *this = Vehicle();
    }
    void DisplayInfo(void) const
    {
        cout << "Enter # of Wheels on Vehicle: " << wheels << endl;
    }
};
int main(void)
{
    Vehicle f(4);
    f.DisplayInfo();
    return 0;
}
