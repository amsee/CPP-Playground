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
        pages = 0;
    }
    Book(int p)
    {
        bool valid = p == 10 || p == 9 || p == 8 || p == 7 || p == 6 || p == 5 || p == 4 || p == 3 || p == 2 || p == 1;
        if (valid)
        {
            pages = p;
            ValidMessage();
        }
        else
        {
            *this = Book(); // * call?
            InvalidMessage();
        }
    }
    void ValidMessage(void) const
    {
        cout << "This is the right book." << endl;
    }
    void InvalidMessage(void) const
    {
        cout << "This is the wrong book." << endl;
    }
};
int main(void)
{
    int pages;
    cout << "Enter # of Pages: " << endl;
    cin >> pages;

    Book b(pages);
    return 0;
}
