#include <iostream>
#include <cstring>
using namespace std;

class Ticket
{
    private:
        int price;
        char seat[2];
    public: 
    Ticket(void)
    {
        price = 0;
        seat[0] = '\0';
    }
    Ticket(int pr, const char* se)
    {
        if ((price >= 100) && (price <= 400))
        {
            price = pr;
        }
        if (char* seat)
        {
            strcpy(seat, se);
            cout << "your seat number" << endl;
        }
    }
    void DisplayInfo(void)
    {
        cout << "price" << endl;
        cout << "seat number" << endl;
    }
};
int main(void)
{
    Ticket *movie;
    Ticket t(100, "A");
    t.DisplayInfo();
    cout << "display ticket info" << endl;

    return 0;
}
    