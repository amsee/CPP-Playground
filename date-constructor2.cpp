#include <iostream>
using namespace std;

class Date
{
    private:
        int month;
        int day;
        int year;
    public:
    Date(void)                         //! DEFAULT CONSTRUCTOR
    {
        month = 0;
        day = 0;
        year = 0;
    }
    Date(int m, int d, int y)          //! PARAMETER CONSTRUCTOR
    {
        if((month >= 1)&&(month <=12))
        {
            month = m;
        }
        if((day >=1 )&&(day<=31))
        {
            day = d;
        }
        if((year >= 2000)&& (year <= 3000))
        {
            year = y;
        }
    }
    void displayInfo(void) const 
    {
        cout << "The month is: "  << month << endl;
        cout << "The day is: "  << day << endl;
        cout << "The year is: " << year << endl;
    }
};
int main(void)
{
    Date holiday; //! call default constructor
    Date f(4, 14, 2018); // ! call parameter constructor

    f.displayInfo();

    return 0;
}