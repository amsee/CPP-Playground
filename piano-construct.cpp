#include <iostream>
using namespace std;

class Piano
{
    private:
        int BlackKeys; //52
        int WhiteKeys; //36
    public:
    Piano(void)
    {
        BlackKeys = 0;
        WhiteKeys = 0;
    }
    Piano(int bk, int wk)
    {
        if (BlackKeys == 52)
        {
            BlackKeys = bk;
        }
        if (WhiteKeys == 36)
        {
            WhiteKeys = wk;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "How many black keys are there? " << BlackKeys << endl;
        cout << "How many white keys are there? " << WhiteKeys << endl;
    }
};
int main(void)
{
    Piano *keys;
    Piano k(52, 36);
    cout << "Piano Keys" << endl;
    k.DisplayInfo();
    return 0;
}
