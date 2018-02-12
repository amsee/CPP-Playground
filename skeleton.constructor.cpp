#include <iostream>
using namespace std;

class Person
{
    private:
        int eyes; 
    public:
        Person()
        {
            eyes = 0;
        } 
        Person(int e)
        {
            eyes = e;
        }
        void getEyes(void) const
        {
            cout << "How many eyes do you have? " << eyes << endl;
        }
};
int main()
{
    Person pi;
    Person f(2);
    return 0;
}
