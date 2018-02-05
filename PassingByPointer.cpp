#include <iostream>
using namespace std;

// * => "Value in the address of..."
void swap(int *a, int *b);

int main()
{

    // Ask user for two numbers
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter another number: ";
    cin >> b;

    // Show values before the swap
    cout << "BEFORE THE SWAP ---" << endl;
    cout << "a: " << a << " b: " << b << endl;

    // Show the addresses
    cout << "ADDRESSES ---" << endl;
    cout << "&a: " << &a << " &b: " << &b << endl;

    // Pass the ADDRESSES of a and b to the function swap
    swap(&a, &b);

    // After the swap
    cout << "AFTER THE SWAP --- " << endl;
    cout << "a: " << a << " b " << b << endl;

    // Show the addresses again
    cout << "ADDRESSES ---" << endl;
    cout << "&a: " << &a << " &b: " << &b << endl;

    return 0;
}

// Swap functions that swap by pointers
// a and b are the addresses that were passed (&a = a, &b = b)
void swap(int *a, int *b)
{
    // c gets the value of the address a
    int c = 0;
    
    c = *a;

    // value in the address of b is transferred over to the address of a
    *a = *b;

    // value OF c is transferred over to the address of b
    *b = c;
}
