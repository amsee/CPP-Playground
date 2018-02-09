// * import library -2-
#include <iostream>
#include <cstring>
using namespace std;

// * Create class
class Beverage
{
    // * List class properties
    private:
        char drink[30];
        int size;
    // * Display information
    public:
        void display_information() const
        {
            // * Output to user
            cout << "What would you like to drink?" << endl;
            cout << "What size?" << endl;
        }
        // * Assign variables
        void set(const char *UI_drink, int UI_size)
        {
            strcpy(drink, UI_drink);
            size = UI_size;
        }
};
// * Main function
int main()
{
    // * Set nullpointer
    Beverage *fluids = nullptr;
    // * Initiate variable
    int size = 0;
    // * Ask for user output
    cout << "How many cups can you drink?" << endl;
    cin >> size;
    cout << "Ok, so you can take in " << size << " cups in one go." << endl;
    // * Create an arrray
    fluids = new Beverage[size];
    // * Return integer
    return 0;
}