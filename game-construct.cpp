#include <iostream>
#include <cstring>
using namespace std;

class Game
{
    private:
        char title[50];
        int level;
    public:
    Game(void)
    {
        title[0] ='\0';
        level = 0;
    }
    Game(const char* t, int l)
    {
        strcpy(title, t);
        level = l;
    }
    void displayInfo() const
    {
        cout << "Title of Game: " << title << endl;
        cout << "Level: " << level << end;
    } 
};
int main(void)
{
    Game *xbox;
    Game x("SilentHill", 5);
    cout << "GAME INFORMATION ===>" << endl;
    x.displayInfo();
    return 0;
}