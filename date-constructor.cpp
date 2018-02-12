#include <iostream>
using namespace std;

// todo date
class Date
{
    private:
// todo - int month
        int month;
// todo - int day
        int day;
// todo - int year 
        int year;

// todo date (int, int, int) // ! only accept if valid numbers
    public:
        Date(void)
        {
            month = 0;
            day = 0;
            year = 0;
        }
// todo getDates const 
    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }
// todo display all entered dates
    void displayInfo(void) const
    {
        cout << "The month is: " << month << endl;
        cout << "The day is: " << day << endl;      
        cout << "The year is: " << year << endl;
    }
};      
// todo dynamically allocate dates
int main(void)
{
    Date mm;
    Date dd;
    Date yy;

    mm.displayInfo();
    dd.displayInfo();
    yy.displayInfo();

    return 0;
}
// todo - ask user how many dates will be entered 
