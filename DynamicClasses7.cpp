// Import Library
//! 2 
#include <iostream>
#include <cstring>
using namespace std;

// Declare Class
class School
{
    // Declare Properties
    private:
        char student_id[10];
        int student_number;

    public:
        // Get Class information
        void display_information() const
    {
            // User Output
            cout << "Your Student ID: " << endl;
            cout << "Your Student #: " << endl;
    }
        // Assign Variables
        void set(const char *UI_id, int UI_n)
    {
            strcpy(student_id, UI_id);
            student_number = UI_n;
    }
};
// Main Function
int main()
{
// Initiate Variable
School *student = nullptr;
// Define Variable
int size = 0;
// User Output
cout << "What floor is your class located at?" << endl;
cin >> size; 
cout << "Okay, so your class is located on the " << size << "rd floor!" << endl;
// Create Array
student = new School[size];

for(int i = 0; i < size; i++)
    {
        // Create temporary variables
        char sn[10];
        char prog[4];

        // A label that says you're editing student # 1...2...3...etc
        cout << "STUDENT # " << i + 1 << endl;
        
        cout << "Enter student number for the current student: ";
        cin >> sn;

        cout << "Enter the student's program: ";
        cin >> prog;

        // use the set method
        student[i].setInfo(sn, prog);

        cout << "END OF STUDENT # " << i + 1 << endl;
    }
// Return Integer
return 0;
}