// * Import Library
#include <iostream>
using namespace std;
// * Declare Class 
class Book
{
    // * List Properties of Class
    private:
        int chapter;
        int page;
    // * Default Constructor
    public:
    Book(void)
    {
    // * Initialize variables to 0 or null
        chapter = 0;
        page = 0;
    }
    // * Parameter Constructor
    Book(int ch, int pg)
    {
        if ((chapter >= 1) && (chapter <= 10)) 
        {
            chapter = ch;
        }
        if ((page >= 1) && (page <= 100))
        {
            page = pg;
        }
    }
    // * Display Information to User
    void DisplayInfo(void) const
    {
        // * Declare variables
        cout << "You are on chapter " << chapter << endl;
        cout << "You are on page " << page << endl;
    }
};
// * Main Function
int main(void)
{
    Book novel;
    Book n(10, 100);

    cout << "Book: " << endl;

    n.DisplayInfo();
    return 0;
}