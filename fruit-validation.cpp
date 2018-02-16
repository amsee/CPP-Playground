#include <iostream>
using namespace std;

class Fruit
{
    private:
        int pear;
        int kiwi;
        int apple;
        int strawberry;
    public:
    Fruit(void)
    {
        pear = 0;
        kiwi = 0;
        apple = 0;
        strawberry = 0;
    }
    Fruit(int p, int k, int a, int s)
    {
        if((pear > 1) && (pear < 3))
        {
            pear = p;
        }
        if((kiwi > 49) && (kiwi < 51))
        {
            kiwi = k;
        }
        if((apple > 2) && (apple < 4))
        {
            apple = a;
        }
        if((strawberry > 99) && (strawberry < 101))
        {
            strawberry = s;
        }
    }
    void DisplayInfo(void)
    {
        cout << "How many seeds in a pear? " << pear << endl;
        cout << "How many seeds in a kiwi? " << kiwi << endl;
        cout << "How many seeds in an apple? " << apple << endl;
        cout << "How many seeds in a strawberry? " << strawberry << endl;
    }
};
int main(void)
{
    Fruit *seeds;
    Fruit s(2, 50, 2, 100);

    cout << "SEEDS IN A FRUIT" << endl;
    cout << "----------------------------------" << endl;

    s.DisplayInfo();
    return 0;
}