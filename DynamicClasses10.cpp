#include <iostream>
#include <cstring>
using namespace std;

class CookieGram
{
    private:
        char cookietype[10];
        int amount;
    public:
        void display_information() const
        {
            cout << "Did you get the soft or hard kind of cookie?" << endl;
            cout << "How many cookies did you get?" << endl;
        }
        void set(const char *type, int num)
        {
            strcpy(cookietype, type);
            amount = num;
        }
};
int main()
{
    CookieGram *cookies = nullptr;
    int size = 0;
    cout << "How many cookies do you want to get this year?" << endl;
    cin >> size;
    cout << "This year you will get " << size << " cookie grams." << endl;
    cout << "Are you satisfied?" << endl;
    cookies = new CookieGram[size];
    return 0;
}