// main.cpp
#include <iostream>
#include "Grade.h"
using namespace std;
using namespace Amy;

int main(void)
{
    char letter;
    cout << "Enter Grade: " << endl;
    cin >> letter;

    Grade g(letter);

    return 0;
}
