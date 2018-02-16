#include <iostream>
using namespace std;

class Fish
{
    private:
        int goldfish;
        int guppy;
        int siamese;
        int shrimp;
        int frog;
// ! DEFAULT CONSTRUCTOR
    public:
    Fish(void)
    {
        goldfish = 0;
        guppy = 0;
        siamese = 0;
        shrimp = 0;
        frog = 0;
    }
// ! PARAMETER CONSTRUCTOR
    Fish(int g1, int g2, int s1, int s2, int f)
    {
        if (goldfish <= 10)
        {
            goldfish = g1;
        }
        if (guppy <= 8)
        {
            guppy = g2;
        }
        if (siamese <= 6)
        {
            siamese = s1;
        }
        if (shrimp <= 4)
        {
            shrimp = s2;
        }
        if (frog <= 1)
        {
            frog = f;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "# of Goldfish : " << goldfish << endl;
        cout << "# of Guppy : " << guppy << endl;
        cout << "# of Siamese : " << siamese << endl;
        cout << "# of Shrimp : " << shrimp << endl;
        cout << "# of Frog : " << frog << endl;
    }
};
int main(void)
{
    Fish *fishies;
    Fish f(10, 8, 6, 4, 1);

    cout << "# of Fishies" << endl;
    cout << "========================" << endl;

    f.DisplayInfo();
    return 0;
}