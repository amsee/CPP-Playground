// todo:    Import Library
#include <iostream>
#include <cstring>
using namespace std;

// todo:    Declare Class
            // * Declare class Phones
class Phones
{
// todo:    Declare Properties
    private:
            // * Define Variables
        char make[10];
        int model;
// todo:    Declare Functions
    public:
// todo:    Set Variables 
            // * Assign Variables
        void set(const char *c, int m)
        {
            strcpy(make, c);
            model = m;
        }
// todo:    Display Information
            // * Display Information for User
        void get() const
        {
            // * Output to User + Define Variables
            cout << "Make of Mobile Phone: " << make << endl;
            cout << "Model of Mobile Phone: " << model << endl;
        }  
};
            // * Class Function ends here.
// todo:    Main Function
int main()
{
            // * Set Null Pointer 
    Phones *mobile = nullptr;
            // * Define Variable as Integer
    int size = 0;
            // * Output to User
    cout << "How many phones were lost? ";
            // * Input from User
    cin >> size;
            // * Second Output to User after first Input
    cout << "So a total of " << size << " phones were found." << endl;
            // * Create an Array
    mobile = new Phones[size];
// todo:    For Loop Inside Variables
            // * Loop Inside Main Function
    for (int x = 0; x < size; x++)
    {
// todo:    Set Temp Variables
            // * Define Variables 
        char make[10];
        int model;
            // * Increment Output
        cout << "--- 1. Mobile Information ---" << endl;
            // * First String Output to User
        cout << "What is the make of the mobile phone? ";
            // * User Input
        cin >> make;
            // * Increment Output
        cout << "--- 2. Mobile Information ---" << endl;
            // * Second String Output to User
        cout << "What is the model of the mobile phone? ";
            // * User Input
        cin >> model; 
// todo:    Use Set Method
            // * mobile = variable
            // * [x] = variable
            // * .set = function
            // * make, model = function inside parameters
        mobile[x].set(make, model);
            // *  Final output to user from loop funciton inside main
        cout << "Done." << endl;
    }
// todo:    For Loop Outside of Main
            // * For Loop Main Function
for (int x = 0; x < size; x++)
{
            // * Display/Get function to user set 
    mobile[x].get();
            // * Final output to user from loop function outside main 
    cout << "Thank you." << endl;
}
// todo:    Return Integer
            // * return 0 as True for Int
    return 0;
}