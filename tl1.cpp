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
    void get(void) const
    {
        cout << "Cup size: " << c_size << endl;
        cout << "Price: " << price << endl;
    }
}
