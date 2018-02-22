
// todo Vehicle (check if wheels are 2 wheels, 4 wheels or more than 4, if it's 2 wheels, print out motorcycle, if it's 4 print out car, if it's more, print out truck)

// ask for number of wheels
// then, depending on that, the program spits out what kind of vehicle you have



#include <iostream>
using namespace std;

class Vehicle
{
    private:
        int wheels;
    public:
    Vehicle(void)
    {
        wheels = 0;
    }

    //Vehicle v(wheel);
    Vehicle(int wheel)
    {
        bool valid = wheel == 4 || wheel == 2;
        if (valid)
        {
            wheels = wheel;
        }
        // * check if there are 2 wheels -- output: motorcycle
        if (wheel == 2)
        {
            cout << "Motorcycle" << endl;
        }
        // * check if there are 4 wheels -- output: car
        if (wheel == 4)
        {
            cout << "Car" << endl;
        }
        if (wheel > 4)
        {
        // * check if there are more than 4 wheels -- output: truck
            cout << "Truck" << endl;
        }
        else
        {
        *this = Vehicle();
        }
    }
    void DisplayInfo(void) const
    {
        cout << "# of wheels on Vehicle: " << wheels << endl;
    }
};
int main(void)
{
    int wheels;

    cout << "# of wheels on Vehicle: " << endl;
    cin >> wheels;

    Vehicle v(wheels);

    v.DisplayInfo();

    return 0;
}
