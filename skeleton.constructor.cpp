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
};
int main()
{
    Person pi;
    Person f(2);
    return 0;
}
