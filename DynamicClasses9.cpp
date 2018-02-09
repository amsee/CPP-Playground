// todo - import library
#include <iostream>  
#include <cstring>
using namespace std;

// todo - create class
class Course
{
    // todo - list class properties
    private:
        char course_name[50];
        char course_code[6];
    // todo - display information
    public: 
        void display_information() const
        // todo - output to user
        {
            cout << "Enter course name = " << endl;
            cout << "Enter course code = " << endl;
        }
        // todo - set variables
        void set(const char *UI_cn, const char *UI_cc)
        {
            // ! strcopy for strings only
            strcpy(course_name, UI_cn);
            strcpy(course_code, UI_cc);
        }
};
// todo - main function
int main()
{
    // todo - set null pointer
    Course *student = nullptr;
    // todo - initialize variable
    int size = 0;
    // todo - output to user
    cout << "WHat is your course code?" << endl;
    cin >> size;
    cout << "Says here that you have " << size << " as your first lecture." << endl;
    // todo - create an array
    student = new Course[size];
    // todo - return integer
    return 0;
}

