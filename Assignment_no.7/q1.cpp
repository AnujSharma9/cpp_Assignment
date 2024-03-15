#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    float sal;
    string desg;

public:
    Employee()
    {
        id = 1;
        sal = 10000;
    }

    Employee(int id, int sal)
    {
        this->id = id;
        this->sal = sal;
    }

    int get_id()
    {
        return id;
    }
    float get_sal()
    {
        return sal;
    }

    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    virtual void display()
    {
        cout << "id is : " << id << endl;
        cout << "Salary is : " << sal << endl;
    }

    virtual void accept()
    {
        cout << "enter your id : " << endl;
        cin >> id;
        cout << "enter sal : " << endl;
        cin >> sal;
    }
};
class Manager : virtual public Employee
{
protected:
    float bonus;

public:
    Manager()
    {
        bonus = 1000;
    }
    Manager(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->bonus = bonus;
    }
    void acceptManager()
    {
        cout << "Enter the value of bonus " << endl;
        cin >> bonus;
    }
    void displayManager()
    {

        cout << "your bonus is: " << bonus << endl;
    }
    void accept()
    {
        Employee::accept();

        this->acceptManager();
        // cout<<"enter the id : "<<endl;
        // cin>>id;
        // cout<<"Enter your Salary"<<endl;
        // cin>>sal;
        // cout << "enter bonus : " << endl;
        // cin >> bonus;
    }
    void display()
    {
        Employee::display();
        // cout << "your bonus is: " << bonus << endl;
        this->displayManager();
    }

    float get_bonus()
    {
        return bonus;
    }

    void set_sal(float bonus)
    {
        this->bonus = bonus;
    }
};

class SalesMan : virtual public Employee
{
protected:
    float comm;

public:
    SalesMan()
    {
        comm = 1000;
    }
    SalesMan(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->comm = comm;
    }

    void acceptSalesman()
    {
        cout << "Enter the value of commission" << endl;
        cin >> comm;
    }
    void dispalySalesman()
    {
        cout << "Your commission is " << comm << endl;
    }
    void accept()
    {
        Employee::accept();
        this->acceptSalesman();
        // cout << "enter comission :" << endl;

        // cin >> comm;
    }
    void display()
    {
        Employee::display();
        this->dispalySalesman();
        // cout << "your comission is :" << comm << endl;
    }
    float get_comm()
    {
        return comm;
    }

    void set_sal(float comm)
    {
        this->comm = comm;
    }
};

class SalesManager : public Manager, public SalesMan
{
public:
    SalesManager()
    {
        // id = 1;
        // sal = 10000;
        // bonus = 1000;
        // comm = 500;
    }
    // SalesManager(int id, float sal, float bonus, float comm)
    // {
    //    // this->id = id;
    //     //this->sal = sal;
    //     this->bonus = bonus;
    //     this->comm = comm;
    // }

    void accept()
    {
        //     Manager::accept();
        //     SalesMan::accept();
        Employee::accept();
        SalesMan::acceptSalesman();
        Manager::acceptManager();
    }
    void display()
    {
        // Manager::display();
        // SalesMan::display();
        Employee::display();
        SalesMan::dispalySalesman();
        Manager::displayManager();
    }
};

int menu()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Add Manager " << endl;
    cout << "2.Add Sales-Man" << endl;
    cout << "3.Add Sales-Manger" << endl;
    cout << "4.Display Manager" << endl;
    cout << "5.Display Sales-Man" << endl;
    cout << "6.Dispaly Sales-Manager" << endl;
    cout << "7.Display all Employee " << endl;

    cout << "****************************************************" << endl;

    cout
        << "Enter your choice" << endl;
    cin >> choice;

    return choice;
}

int main()
{
    int choice, size, count = 0;
    int salesman = 0;
    int salesmanger = 0;
    int manager = 0;

    cout << "Enter the Size: " << endl;
    cin >> size;
    Employee *emp[size];

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (count < size)
            {
                emp[count] = new Manager(); // upcasting
                emp[count]->accept();
                ++count;
                ++manager;
            }
            else
            {
                cout << "Array is full" << endl;
            }

            break;
        case 2:

            if (count < size)
            {
                emp[count] = new SalesMan(); // upcasting
                emp[count]->accept();
                ++count;
                ++salesman;
            }
            else
            {
                cout << "Array is full" << endl;
            }
            break;
            
        case 3:
            if (count < size)
            {
                emp[count] = new SalesManager();
                emp[count]->accept();
                ++count;
                ++salesmanger;
            }
            cout << "Array is full" << endl;

            break;
        case 4:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*emp) == typeid(Manager))
                {
                    emp[i]->display();
                }
            }
            break;
        case 5:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*emp) == typeid(SalesMan))
                {
                    emp[i]->display();
                }
            }
            break;

        case 6:
            for (int i = 0; i < count; i++)
            {
                if (typeid(*emp) == typeid(SalesManager))
                {
                    emp[i]->display();
                }
            }
            break;

        case 7:
            cout << "The total count of Manager is: " << manager << endl;
            cout << "The total count of Sales-Man is: " << salesman << endl;
            cout << "The total count of Sales-Manger is: " << salesmanger << endl;

        default:
            cout << "Wrong Choice.....Try Again....." << endl;
            break;
        }
    }
    if (emp[size] != NULL)
    {
        for (int i = 0; i < count; i++)
        {
            delete emp[i];
        }
    }

    emp[size] = NULL;

    // Employee e;
    // e.display();
    // e.accept();
    // e.display();

//     SalesManager s1;
//     s1.accept();
//     s1.display();

//    SalesMan s;
//    s.accept();
//    s.display();
}