#include <iostream>
using namespace std;

class shape
{
public:
    virtual void acceptShape() = 0;
    virtual void printArea() = 0;
};
class circle : public shape
{
private:
    int radius;

public:
    void acceptShape()
    {
        cout << "Enter the value of radius:- " << endl;
        cin >> radius;
    }
    void printArea()
    {
        cout << "the area of the circle is:- " << 3.14 * radius * radius << endl;
    }
};
class rectangle : public shape
{
private:
    int lenght;
    int breath;

public:
    void acceptShape()
    {
        cout << "enter the vlaue of length: " << endl;
        cin >> lenght;

        cout << "enter the value of breath: " << endl;
        ;
        cin >> breath;
    }
    void printArea()
    {
        cout << "area of the rectangle :- " << lenght * breath << endl;
    }
};
int main()
{
    int choice;
    shape *s = NULL;

    do
    {

        cout << " 0 . Exit" << endl;
        cout << " 1 . Area of rectangle" << endl;
        cout << " 2 . Area of circle" << endl;
        cout << "enter your choice:- ";
        cin >> choice;


        switch (choice)
        {
        case 0:
            cout << "thank for using our services" << endl;
            break;
        case 1:
            s = new rectangle();
            break;
        case 2:
            s = new circle();
            break;

        deafult:
            cout << "please enter the correct choice" << endl;
            break;
        }

        if (s != NULL)
        {
            s->acceptShape();
            s->printArea();
            delete s;
            s = NULL;
        }

    } while (choice != 0);
}