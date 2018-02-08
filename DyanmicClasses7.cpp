// Import Library -- 2
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
}
public:
    // Get Class information
    void get() const
    {
        // User Output
        cout << "Your Student ID: " << endl;
        cout << "Your Student #: " << endl;
    }

};
// Assign Variables
void set(const char *UI_id, int UI_n)
{
    student_id = UI_id;
    student_number = UI_n;
}
// Main Function
int main()
{
// Initiate Variable
School *student = nullptr;
// Define Variable
int position = 0;
// User Output
cout << "What floor is your class located at?"; 
cin >> position; 
// Create Array
student = new School[student];
// Return Integer
return 0;
}