#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    float sal;

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
    Manager(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
       // Employee::accept();
        cout<<"enter the id : "<<endl;
        cin>>id;
        cout<<"Enter your Salary"<<endl;
        cin>>sal;
        cout << "enter bonus : " << endl;
        cin >> bonus;
    }
    void display()
    {
        Employee::display();
        cout << "your bonus is: " << bonus << endl;
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
    SalesMan(float bonus)
    {
        this->comm = comm;
    }
    void accept()
    {
        Employee::accept();
        cout << "enter comission :" << endl;
        cin >> comm;
    }
    void display()
    {
        Employee::display();
        cout << "your comission is :" << comm << endl;
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
        id = 1;
        sal = 10000;
        bonus = 1000;
        comm = 500;
    }
    SalesManager(int id, float sal, float bonus, float comm)
    {
        this->id = id;
        this->sal = sal;
        this->bonus = bonus;
        this->comm = comm;
    }

    void accept()
    {
        Manager::accept();
        SalesMan::accept();
        // Employee::accept();
    }
    void display()
    {
        Manager::display();
        SalesMan::display();
        // Employee::display();
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
    cout << "5.Display Sales-Manger" << endl;
    cout << "6.Dispaly Sales-Man" << endl;

    cout << "Enter your choice" << endl;
    cin >> choice;

    return choice;
}

int main()
{
    // int choice, size, count = 0;

    // cout << "Enter the Size: " << endl;
    // cin >> size;
    // Employee *emp[size];

    // while ((choice = menu()) != 0)
    // {
    //     switch (choice)
    //     {
    //     case 1:
    //         if (count < size)
    //         {
    //             emp[count] = new Manager();
    //             emp[count]->accept();
    //         }
    //         else
    //         {
    //             cout << "Array is full" << endl;
    //         }

    //         break;
    //     case 2:

    //         if (count < size)
    //         {
    //             emp[count] = new SalesMan();
    //             emp[count]->accept();
    //         }
    //         else
    //         {
    //             cout << "Array is full" << endl;
    //         }
    //     case 3:

    //     default:
    //         break;
    //     }
    // }
    // Employee e;
    // e.display();
    // e.accept();
    // e.display();
     SalesManager s1;
     s1.accept();
     s1.display();
}