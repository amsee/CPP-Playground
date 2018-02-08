// import library
#include <iostream> 
using namespace std;
// declare class
class iOS
{
// class properties
private:
    int hardware;
    int software;
// class functions
public:
     void slow()
    {
        cout << "Your iPhone is slow." << endl;
    }
    void fast()
    {
        cout << "Your iPhone is fast." << endl;
    }
// set values for class
void set(int PSfast, int PSslow)
{
    hardware = PSfast;
    software = PSslow;
}
};
// main function
int main()
{
int speed = 0;
iOS *ios = nullptr;
cout << "What is the speed of your iPhone?" << endl;
cin >> speed;
// create array
ios = new iOS[speed];
// return int
return 0;
}