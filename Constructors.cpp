class Drink
{
private:
    char c_size;
    int price;
public:
    Drink()
    {
       c_size = 'S';
       price = 0;
    }

    Drink(char size, int pr) 
    {
        c_size = size;
        price = pr;
    }
    
    void get(void) const
    {
        cout << "Cup size: " << c_size << endl;
        cout << "Price: " << price << endl;
    }
}
Drink d;          // (expects no parameters and has an empty body).
Drink d('S', 5);  // Drink(size, pr)
