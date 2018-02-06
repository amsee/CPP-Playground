// import library
#include <iostream>
using namespace std;

// define local variable
void card(int *diamond, int *heart, int *spade, int *club);
void work(int *ds1, int *ds2);

// main function
int main()
{
    // define variables
    int diamond, heart, spade, club;

    // ask user for first input 
    cout << "Enter 1st num = ";
    cin >> diamond; 
    // ask user for second input
    cout << "Enter 2nd num = ";
    cin >> heart;
    // ask user for third input
    cout << "Enter 3rd num = ";
    cin >> spade;
    // ask user for fourth input
    cout << "Enter 4th num = ";
    cin >> club;

    // first output to screen
    cout << " Before Card Swap " << endl;
    cout << " ================= " << endl;
    cout << " Diamond " << diamond << " Heart " << heart << " Spade " << spade << " Club " << club << endl;

    // call swap function by address
    card(&diamond, &heart, &spade, &club);
    
    // output to user after swap
    cout << " After Card Swap " << endl;
    cout << " =============== " << endl;
    cout << " Diamond -> " << diamond << " Heart -> " << " Spade -> " << spade << " Club -> " << club << endl;

    // return integer
    return 0;

}

// declare swap function
void card(int *diamond, int *heart, int *spade, int *club)
{
    // call swap functions
    work(diamond, club);
    work(heart, spade);
}

// swap function passes 2 variables to swap
void work(int *ds1, int *ds2)
{
    //declare variables
    int fs = 0;
    fs = *ds1;
    *ds1 = *ds2;
    *ds2 = fs;
}

