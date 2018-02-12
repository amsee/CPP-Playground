// todo import library [2]
#include <iostream>
#include <cstring>
using namespace std;
// todo create called Animal
// ! Class starts.
// ! =====================================================
class Animal
{
// todo list properties
    private:
        int eyes;
        char species[10]; 
// todo list constructors
// todo pass values
    public:
        // todo set variablres to empty state (0 or null)
    Animal()
        {
        eyes = 0;
        species[0] = '\0';
        }
// todo pass values 
    Animal(int E, const char* S)
    {
        eyes = E;
        strcpy(species, S);
    }
// todo display information (get)
    void getEyes(void) const
    {
        cout << "I have " << eyes << " eyes." << endl;
    }
    void getSpecies(void) const
    {
        cout << "I am a " << species << " ." << endl;
    }
};
// ! =====================================================
// ! Class ends.
// todo create main function
// ! Main Starts.
// ! =====================================================
int main(void)
{
    Animal warm;
    Animal cold(2, "cold");

    warm.getEyes();
    cold.getSpecies();

// todo return 0
    return 0;
}
// ! =====================================================
// ! Main ends.
