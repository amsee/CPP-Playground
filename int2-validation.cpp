#include <iostream>
using namespace std;

class Piano
{
    private:
        int BlackKey; //36
        int WhiteKey; //52  
    public:
    Piano(void)
    {
        BlackKey = 0;
        WhiteKey = 0;
    }
    Piano(int wk, int bk)
    {
        if (BlackKey == 36)
        {
            cout << "True." << endl;
        }
        if (WhiteKey == 52)
        {
            cout << "True." << endl;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "There are this many Black Keys: " << BlackKey << endl;
        cout << "There are this many White Keys: " << WhiteKey << endl;
    }
};
int main(void)
{
    Piano *keys;
    Piano p(52, 36);
    cout << "# of Keys: " << endl;
    cout << "========================" << endl;
    p.DisplayInfo();
    return 0;
}