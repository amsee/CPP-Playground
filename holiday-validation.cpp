#include <iostream>
using namespace std;

class Holiday
{
    private:
        int thanksgiving;
        int christmas;
        int valentines;
    public:
    Holiday(void)
    {
        thanksgiving = 0;
        christmas = 0;
        valentines = 0;
    }
    Holiday(int t, int c, int v)
    {
        if (thanksgiving == 8)
        {
            thanksgiving = t;
        }
        if (christmas == 25)
        {
            christmas = c;
        }
        if (valentines == 14)
        {
            valentines = v;
        }
    }
    void DisplayInformation(void) const
    {
        cout << "What day is Thanksgiving on? " << thanksgiving << endl;
        cout << "What day is Christmas on? " << christmas << endl;
        cout << "What day is Valentines on? " << valentines << endl;
    }
};
int main(void)
{
    Holiday *days;
    Holiday h(8, 25, 14);

    cout << "Special" << endl;
    
    h.DisplayInformation();
    return 0;
}
