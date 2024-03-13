#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    float price;

public:
    virtual void acceptPrice() = 0;
    virtual void acceptDetails() = 0;
    virtual float get_Price() = 0;
    virtual void printDetails() = 0;
};
class books : public Product
{

    string author;

public:
    void acceptDetails()
    {
        cout << "enter the product id " << endl;
        cin >> id;
        cout << "enter the title " << endl;
        cin >> title;
        cout << "enter the Author name " << endl;
        cin >> author;
        acceptPrice();
    }
    void acceptPrice()
    {
        cout << "enter the value of price" << endl;
        cin >> price;
        price = price - (price / 10);
        cout << "the value of accomidity after 10 percent disscount " << price << endl;
    }

    void printDetails()
    {
        cout << "book id: " << id << endl;
        cout << " book title :" << title << endl;
        cout << "book author: " << author << endl;
        cout << "price" << price << endl;
    }
    float get_Price()
    {
        return price;
    }
};
class tape : public Product
{

    string artist;

public:
    void acceptPrice()
    {
        cout << "enter the value of price: " << endl;
        cin >> price;
        price = price - (price / 5);
        cout << "the value of accomidity after 5 percent disscount" << price << endl;
    }

    void acceptDetails()
    {
        cout << "Enter the product id" << endl;
        cin >> id;
        cout << "Enter the product title" << endl;
        cin >> title;
        cout << "Enter the Artist name" << endl;
        cin >> artist;
        acceptPrice();
    }
    void printDetails()
    {
        cout << "tape id: " << id << endl;
        cout << " tape title :" << title << endl;
        cout << "tape artist: " << artist << endl;
        cout << "price" << price << endl;
    }
    float get_Price()
    {
        return price;
    }
};

int main()
{
    int choice;
    Product *arr[3];
    float price = 0;
    for (int i = 0; i < 3; i++)
    {
        cout << "1.add Books " << endl;
        cout << "2.add tape" << endl;
        cout << "enter your choice:-";
        cin >> choice;

        if (choice == 1)
        {
            arr[i] = new books();
            arr[i]->acceptDetails();
        }
        else
        {
            arr[i] = new tape();
            arr[i]->acceptDetails();
        }

        // delete arr[i];
        // arr[i] = NULL;
    }

    do
    {

        cout << "0. Exit" << endl;
        cout << "1. View final bill" << endl;
        cout << "2. View bill Details " << endl;
        cout << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "thank you please vist again.." << endl;

            break;

        case 1:
            cout << "your total is :" << endl;
            for (int i = 0; i < 3; i++)
            {
                price += arr[i]->get_Price();

                // cout << price;
            }
            cout << price << endl;
            break;
        case 2:
            cout << "your bill is: " << endl;
            for (int i = 0; i < 3; i++)
            {
                arr[i]->printDetails();
            }
            break;

        default:
            break;
        }
        

    } while (choice != 0);

    if (arr != NULL)
        {

            for (int i = 0; i < 3; i++)
            {

                delete arr[i];
                //arr[i] = NULL;
            }
        }
      arr[3]=NULL;
    // Product *ptr = new tape();
    // ptr->acceptDetails();
    // // ptr->acceptPrice();
    // delete ptr;
    // ptr = NULL;
}
