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

        Sides(void)
        {
            app[0] = '\0';
            main[0] = '\0';
            dessert[0] = '\0';
        }
        Sides(int gu, const char* a, const char* m, const char* d)
        {
            guests = gu;
            strcpy(app, a);
            strcpy(main, m);
            strcpy(dessert, d);
        }
        void DisplayInfo() const
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
    Sides f(25, "Calamari", "Steak", "Brule");
    cout << "Party." << endl;
    f.DisplayInfo();
    return 0;
}