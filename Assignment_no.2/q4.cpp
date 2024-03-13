#include <iostream>
using namespace std;

class Address
{
private:
    string Building;
    string Street;
    string city;
    int pin;

public:
    Address()
    {
        pin = 202001; // char strcpy
        Building = "block-a";
        Street = "Jhulalal Mandir";
        city = "Delhi";
    }
    Address(int pin, string Building, string Street, string city)
    {

        this->Building = Building;
        this->Street = Street;
        this->city = city;
        this->pin = pin;
    }

    void accept()
    {
        cout << "Enter the name of building" << endl;
        cin >> Building;
        cout << "Enter the name of Street" << endl;
        cin >> Street;
        cout << "Enter the name of City" << endl;
        cin >> city;
        cout << "Enter the name of pin" << endl;
        cin >> pin;
    }

    void display()
    {
        cout << "The name of the Building" << Building << endl;
        cout << "The name of the Street" << Street << endl;
        cout << "The name of the City" << city << endl;
        cout << "The name of the pin" << pin << endl;
    }

    string get_building()
    
    {
        return Building;
    }

    string get_street()
    {
        return Street;
    }
    string get_city()
    {cout<<"0. exit "<<endl;
        return city;
    }
    int get_pin()
    {
        return pin;
    }

    void set_building(string Building)
    {
        this->Building = Building;
    }
    void set_street(string Street)
    {
        this->Street = Street;
    }
    void set_City(string City)
    {
        this->city = city;
    }
    void set_pin(int pin)
    {
        this->pin = pin;
    }
};

int menu(){
    int choice;
    
    cout<<"0. exit "<<endl;
    cout<<"1. exit "<<endl;
    cout<<"2. exit "<<endl;
    cout<<"3. exit "<<endl;
    cout<<"4. exit "<<endl;
    cout<<"5. exit "<<endl;
    cout<<"6. exit "<<endl;
    cout<<"7. exit "<<endl;
    cout<<"8. exit "<<endl;
    cout<<"9. exit "<<endl;
    cout<<"10. exit "<<endl;

}

int main()
{
    Address a1;
    
}