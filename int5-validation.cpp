#include <iostream>
using namespace std;

class Event
{
    private:
        int guests;
        int grade;

    public:
    Event(void)
    {
        guests = 25;
        grade = 12;
    }
    Event(int g1, int g2)
    {
        if (guests == 25)
        {
            cout << guests << endl;
        }
        if (grade == 12)
        {
            cout << grade << endl;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "Enter Guests: " << guests << endl;
        cout << "Enter Grade: " << grade << endl;
    }
};
int main(void)
{
    Event *grad;
    Event e(25, 12);

    e.DisplayInfo();
    cout << "You are invited to the event." << endl;

    return 0;
}