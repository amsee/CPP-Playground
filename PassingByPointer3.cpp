// import library
#include <iostream>
using namespace std;

// define local variable
void four(int *a,int *b, int *c, int *d);
void swap(int *first, int *second);

// main function
int main()
{
//  define local variable
int a, b, c, d;   
// first user input
cout << "First Input: " << endl;
cin >> a;

// second user input
cout << "Second Input: " << endl;
cin >> b;

// third user input
cout << "Third Input: " << endl;
cin >> c; 

// fourth user input
cout << "Fourth" << endl;
cin >> d;

// output to user before the swap
cout << " Before the swap ====> " << endl;
cout << "Your first number is = " << a << " Second number is = " << b << " Third number is = " << c << " And fourth number is = " << d << endl;

// call swap function by address
four(&a, &b, &c, &d);

// output to user after the swap
cout << " After the swap ===> " << endl;
cout << "Your first number is now your last number = " << d << " the second number is now your third number = " << c << " and your third number is now the second number = " << b << endl;

// return integer
return 0;
}

// declare swap function
void four(int *a, int *b, int *c, int *d)
{
    // call swap functions
    swap(*a, *d);
    swap(*b, *c);
}

// make an swap fucntion that you can pass two variables in and they will swap
void swap(int *first, int *second)
{
    int temp = 0;
    temp = *first;
    *first = *second;
    *second = temp;
}
