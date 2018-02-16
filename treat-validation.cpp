#include <iostream>
using namespace std;

class Treat
{
    private:
        int first;
        int last;
    public:
    Treat(void)
    {
        first = 0;
        last = 0;
    }
    Treat(int f, int l) 
    {
        if ((first >= 1) && (first <= 10))
        {
            first = f;
        }
        if ((last >= 20)) && (last <= 60))
        {
            last = l;
        }
    }
    void display_info(void) const
    {
        cout << "First: " << first << endl;
        cout << "Last: " << last << endl;
    }
};
int main(void)
{
    Treat fl; 
    Treat f(4, 40);

    cout << "First/Last Treat" << endl;

    f.display_info();
    return 0;
}