#include <iostream>
#include <cstring>
using namespace std;

class Bottle
{
    private:
        char brand[10];
        char type[30];
    public:
    Bottle(void)
    {
        brand[0] = '\0';
        type[0] = '\0';
    }
    Bottle(const char* b, const char* t)
    {
        strcpy(brand, b);
        strcpy(type, t);
    }
    void display_info(void) const
    {
        cout << "Nestle | Smart | Evian | Voss | Aquafina" << brand << endl;
        cout << "Mineral | Sparkling | Filtered" << type << endl;
    }
};
int main(void)
{
    Bottle *water;
    Bottle w("Voss", "Sparkling");
    cout << "What kind of water do you drink?" << endl;
    w.display_info();
    return 0;
}