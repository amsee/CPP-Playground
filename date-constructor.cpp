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
}
// todo date (int, int, int) // ! only accept if valid numbers
    public:
        Date()
        {
            month = 0;
            day = 0;
            yaer = 0;
        }
// todo getDates const 
    Date(int m, int d, int y) const

// todo display all entered dates
// todo dynamically allocate dates
// todo - ask user how many dates will be entered 
