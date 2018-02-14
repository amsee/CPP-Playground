#include <iostream>
using namespace std;

class Paper
{
    private:
        int length;
        int width;
    public:
    Paper(void)
    {
        length = 0;
        width = 0;
    }
    Paper(int l, int w)
    {
        if(length == 11)
        {
            length = l;
        }
        if(width = 8)
        {
            width = w;
        }
    }
    void DisplayInfo() const 
    {
        cout << "Is length of paper 11 inches? " << endl;
        cout << "Is width of paper 8 inches? " << endl;
    }
};
int main(void)
{
    piano.
}