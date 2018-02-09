// todo     import library
// * import io library
#include <iostream>
// * import string library
#include <cstring>
// * import standard library
using namespace std;
// todo     declare class
class Tutor
{
// todo     properties
    private:
        char speciality[20];
        char program[20];
// * get information
// todo     functions
    public:
// * display information
        void get_info() const //! get == (void)
        {
            cout << "What's your speciality? " << speciality << endl; 
            cout << "What's your program? " << program << endl;
        }
// todo     set variables
// * assign variables
        void set_info(const char *spc, const char *prg) //! set == variable type
        {
            strcpy(speciality, spc);
            strcpy(program, prg);
        }
};
// todo     main function
int main()
{
// * set null pointer
Tutor *student = nullptr;
// * define variable
int size = 0;
// * user output
cout << "How many students do you want to teach?" << endl;
// * user input
cin >> size;
cout << "Starting Fall 2018, you will be responsible for " << size << " students." << endl; 
// * create an array
student = new Tutor[size];
// todo     create for loop inside main function
// * (initialize; condition; increment)
for (int a = 0; a < size; a++)
{
// * def temp variables 
    char speciality[20];
    char program[20];

// * first line of output to user
    cout << "==> Student Qs #1 <==" << a + 1 << endl;
    cout << "What is your speciality? " << endl;
// * ask for user input
    cin >> speciality;
// * second output to user
    cout << "==> Student Qs #2 <==" << a + 1 << endl;
    cout << "What is your program? " << endl;
// * ask for user input
    cin >> program;
// todo     use set method (set)
    student[a].set_info(speciality, program); //? set info (v1, v2)
    cout << "--- QUESTIONS ALL ANSWERED ---" << endl;
// ! leave main function
}
// todo     create for loop outside main function
for (int a = 0; a < size; a++)
{

 cout << "===== TUTOR INFORMATION COMPLETED =====" << endl;
// todo     use set method (get)    
    student[a].get_info();      //? get info (void)
// * user output
    cout << "Total Students = " << a + 1 << endl;
// * return integer
}
    return 0;
}