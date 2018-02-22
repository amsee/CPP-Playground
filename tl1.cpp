// todo -- Grade (check  if the letter is A, B, C, D, or F

#include <iostream>
using namespace std;

class Grade
{
    private:
        char letter;
    public:
    Grade(void)
    {

      // TODO: let letter = '\0'
        letter = '\0';
    }

    // const char* is only for strings
    Grade(char l)
    {
        bool valid = l == 'A' || l == 'B' || l == 'C' || l == 'D' || l == 'F';
        if (valid)
        {
            letter = l;
            DisplayInfo();
        }
        else
        {
            *this = Grade();
            cout << "The grade is not valid" << endl;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "Valid Grade" << endl;
    }
};
int main(void)
{
    // letter does not exist within this scope
    // TODO: Make letter exist in this scope
    char letter;
    cout << "Enter Grade: " << endl;
    cin >> letter;

    Grade g(letter);

    return 0;
}
