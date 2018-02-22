#include <iostream>
using namespace std;

class Ticket
{
    private:
        int quantity;
        int price;
    public: 
    Ticket(void)
    {
        quantity = 0;
        price = 0;
    }
    Ticket(int q, int p)
    {
        if ((quantity >= 1) && (quantity <= 2))
        {
            cout << "Ticket for two." << endl;
        }
        if ((price >= 10) && (price >= 20)) 
        {
            cout << "Price for two." << endl;
        }
    }
    void DisplayInfo(void) const
    {
        cout << "How many tickets? " << quantity << endl;
        cout << "Price of Ticket " << price << endl;
    }
};
int main(void)
{
    Ticket *t;
    Ticket p(2, 20);

    cout << "Purchase Ticket" << endl;
    cout << "=================================" << endl;

    p.DisplayInfo();
    return 0;
}