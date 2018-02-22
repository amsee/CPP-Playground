#include <iostream>
using namespace std;

class Club
{
    private:
    int student;
    int age;

    public:
    Club(void)
    {
        student = 0;
        age = 0;
    }
    Club(int s, int a)
    {
        if (student >= 10)
        {
            student = s;
        }
        if (age >= 18)
        {
            age = a;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "Enter # of Students: " << student << endl;
        cout << "Enter Age: " << age << endl;
    }
};
int main(void)
{
    Club *cs;
    Club c(10, 18);
    c.DisplayInfo();
    cout << "=====================" << endl;
    cout << "APPROVED" << endl;
    return 0;
}