#include <iostream>
using namespace std;

class Fingers
{
    int numberOfFingers;

  public:
    Fingers()
    {
        numberOfFingers = 5;
    }
    Fingers(int number)
    {
        // Check if fingers is == 5 or less if more, it's abnormal
        bool valid = number == 5 || number == 4 || number == 3 || number == 2 || number == 1;
        if (valid)
        {
            numberOfFingers = number;
        }
        else
        {
          // if there are more than 5 Fingers
          cout << "You're not normal" << endl;

          // Run the first constructor to make number == 5
          *this = Fingers();
        }
    }
    void Display(void) const
    {
        cout << "Amount of fingers: " << numberOfFingers << endl;
    }
};

int main(void)
{
    Fingers f(5);
    Fingers v(10);

    f.Display();
    v.Display();

    return 0;
}
