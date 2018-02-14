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
        Date(void)            //! DEFAULT CONSTRUCTOR
    {
            month = 0;
            day = 0;
            year = 0;
    }
// todo getDates const 
    Date(int m, int d, int y) //! PARAMETER CONSTRUCTOR
    {
    if((month >= 1) && (month <= 12))
    {
        month = m
    }
    if((day >= 1) && (day <= 31))
    {
        day = d
    }
    if((year > 2000) && (year <= 3000))
    {
        year = y
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
// todo - ask user how many dates will be entered 
    Date holiday;
    Date f(2, 12, 2017);

    f.Date(month, day, year);

    cout << "How many dates will be entered? " << endl;
    cin >> 

    month.displayInfo();
    day.displayInfo();
    year.displayInfo();

    return 0;
}
