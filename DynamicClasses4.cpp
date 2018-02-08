// OUTPUT -->  "How many candies would you like to eat today?: "

#include <iostream>
using namespace std;

// Declare Class
class Candy
{
    // Declare Class Properties
private:
    int soft;
    int hard;
    // Declare Class Functions
public:
    // Get Class information from user
    void get(int s, int h) const // constant - no change to the function
    {
        cout << "I will give you " << s << " soft candy canes." << endl;
        cout << "I will give you " << h << " hard gummies." << endl;
    }
// set variables 
void set()
{
    int set (int UIsoft, int UIhard)
    soft = UIsoft;
    hard = UIhard;
}
};
// main function
int main()
{
    // define variables
    int count = 0;
    // create pointer for class
    Candy *candies = nullptr; // pointer returns null | Candy == object/class, *candies == pointer/variable
    // get information from user
    cout << "How many candies would you like to eat today?: " << endl;
    cin >> candies;
    // create an array
    candies = new Candy[count]
    // return int
    return 0;
}
}