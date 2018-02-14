#include <iostream>
#include <cstring>
using namespace std;

// * declare class
class Name
{
    // * list properties
    private:
        char first[20];
        char middle[25];
        char last[20];
    // * default contructor 
    public:
        Name(void)
        {
            // * intiate variables to null/0
            first[0] = '\0';
            middle[0] = '\0';
            last[0] = '\0';
        }
            // * parameter contructor
        Name(const char* f, const char* m, const char* l)
        {
            strcpy(first, f);
            strcpy(middle, m);
            strcpy(last, l);
        }
        // * output information to user
        void displayInfo() const
        {
            cout << "Provide First Name: " << first << endl;
            cout << "Provide Middle Name: " << middle << endl;
            cout << "Provide Last Name: " << last << endl;
        }
};
// declare main function
int main(void)
{
    // * call default constructor
    Name per;
    // * call parameter constructor
    Name f("liam", "leonardo", "lamb");
    // * display output to user
    cout << "Who are you? " << endl;
    cout << "---------------------------------------" << endl;
    // * call display
    f.displayInfo();
    // * return integer 
    return 0;
}