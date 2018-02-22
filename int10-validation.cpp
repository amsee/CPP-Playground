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
        guests = 0;
        grade = 0;
    }
    Event(int g1, int g2)
    {
        if ((guests == 25))
        {
            cout << "Full" << endl;
        }
        if (grade == 12) << endl;
        {
            cout << "Allowed" << endl;
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
    Event *e;
    Event e(25, 12);

    e.DisplayInfo();
    cout << "You are invited to the event." << endl;

    return 0;
}