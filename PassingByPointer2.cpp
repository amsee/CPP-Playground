#include <iostream>
using namespace std;

// local variable definition
void change(int *a, int *b); // <---- * == value within the address of the variable 

// main function
int main()
{
    // define local variable
    int a, b;
    // ask user for adress 1
    cout << "Enter Address 1 == " << endl;
    cin >> a;
    // ask user for address 2
    cout << "Enter Address 2 == " << endl; 
    cin >> b;   
    // before swap
    cout << "Before Address swap " << endl;
    cout << "1: " << a << " 2:" << b << endl;

    // Pass the ADDRESSES of a and b to the function swap
    change(&a, &b);
    // output to user after addresses have been swapped
    cout << "After the Address is swapped " << endl;
    cout << "A1 is now: " << a << " A2 is now: " << b << endl;

    return 0;
}

    // swap function

void change(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}