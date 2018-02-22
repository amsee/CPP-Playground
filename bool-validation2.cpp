// todo - Book (check if there are more than 10 pages for the book to be valid)
#include <iostream>
using namespace std;

class Book
{
    private: 
        int pages;

    public:
    Book(void)
    {
        pages = 10;
    }
    Book(int number)
    {
        bool valid = number == 10 || number == 9 || number == 8 || number == 7 || number == 6 || number == 5 || number == 4 || number == 3 || number == 2 || number == 1;
        if (valid)
        {
            pages = number;
        }
        else 
        {
            cout << "This is not the right book." << endl;
            *this = Book();
        }
    }
    void DisplayInfo(void) const 
    {
        cout << "Enter Number of Pages: " << endl;
    }
};
int main(void)
{
    Book f(10);

    f.DisplayInfo();
    return 0;
}



