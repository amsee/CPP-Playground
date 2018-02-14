#include <iostream>
using namespace std;

class Utility
{
    private:
        int water;
        int electricity;
        int internet;
    public:
    Utility(void)
    {
        water = 0;
        electricity = 0;
        internet = 0;
    }
    Utility(int w, int e, int i)
    {
        if (water <= 100)
        {
            water = w;
        }
        if (electricity >= 100)
        {
            electricity = w;
        }
        if (internet == 50)
        {
            internet = i;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "Cost of water bill per month: " << water << endl;
        cout << "Cost of electricity bill per month: " << electricity << endl;
        cout << "Cost of internet bill per month: " << internet << endl;
    }
};
int main(void)
{
    Utility *bill;
    Utility u(100, 200, 50);
    cout << "How much do you pay for utilities every month?" << endl;
    u.DisplayInfo();
    return 0;
}