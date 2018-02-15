#include <iostream> 
using namespace std;

class Sides
{
    private:
        int guests;
        char app[30];
        char main[30];
        char dessert[30];
    
    public:
    // ! default constructor 
        Sides(void) 
        {
            guests = 0;
            app[0] = '\0';
            main[0] = '\0';
            dessert[0] = '\0';
        }
    // ! parameter constructor 
        Sides(int gu, const char* p, const char* b, const char* n)
        {
            if((guests >= 30) && (guests <= 300))
            {
                guests = gu;
            }
            if (app == p)
            {
                strcpy(app, p);
            }
            if (main == b)
            {
                strcpy(main, b);
            }
            if (dessert == n)
            {
                strcpy(dessert, n);
            }
        }
        void displayInfo(void) const
        {
            cout << "How many guests? -> " << guests << endl;
            cout << "Pick an Appetizer -> " << app << endl;
            cout << "Pick a Main -> " << main << endl;
            cout << "Pick a Dessert -> " << dessert << endl;
        }
};
int main (void)
{
    Sides *party;
    Sides f(25, "Pasta", "Bread", "Noodles");
    
    cout << "Party." << endl;
    return 0;
}