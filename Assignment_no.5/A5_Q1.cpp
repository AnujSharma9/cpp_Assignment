#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        day = 1;
        month = 1;
        year = 2001;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "enter the value of day" << endl;
        cin >> day;
        cout << "enter the value of month" << endl;
        cin >> day;
        cout << "enter the value of year" << endl;
        cin >> day;
    }

    void displayDate()
    {
        cout << " date:-" << day << "/" << month << "/" << year << endl;
    }
    int get_Day()
    {
        cout << "get the value of day" << endl;
        return day;
    }
    void set_day(int day)
    {
        cout << "set the day" << endl;
        this->day = day;
    }
    int get_month()
    {
        cout << "get the value of month" << endl;
        return month;
    }
    void set_month(int day)
    {
        cout << "set the month" << endl;
        this->month = month;
    }
    int get_year()
    {
        cout << "get the value of year" << endl;
        return year;
    }
    void set_year(int day)
    {
        cout << "set the year" << endl;
        this->year = year;
    }

    bool leapYear()
    {

        if (year % 400 == 0)
        {
            // cout<<"this is a leap year";
            return 1;
        }
        else if (year % 100 == 0)
        {
            // cout<<"this is not the leap year";
            return 0;
        }
        else if (year % 400 == 0)
        {
            // cout<<"this is a leap year ";
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
class person

{

protected:
    string name;
    string Adress;
    date dob;

public:
    person()
    {
        name = "Anuj";
        Adress = "j 23 janakpuri ";
    }
    person(string name, string Adress)
    {
        this->name = name;
        this->Adress = Adress;
    }
    person(string name, string Adress, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->Adress = Adress;
    }

    void acceptPerson()
    {
        cout << "enter your Name :-" << endl;
        cin >> name;
        cout << "enter your Address:-" << endl;
        cin >> Adress;
        dob.acceptDate();
    }

    void dispalyPerson()
    {
        cout << "The Name is: " << name << endl;
        cout << "The Address is: " << Adress << endl;
        dob.displayDate();
    }
    string get_Name()
    {
        return name;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    string get_Address()
    {
        return Adress;
    }
    void set_Address(string Adress)
    {
        this->Adress = Adress;
    }
    date get_dateOfBirth()
    {
        return dob;
    }
    void set_dateOfbirth(date dob)
    {
        this->dob = dob;
    }
};

class employee : public person
{
private:
    int id;
    double sal;
    string dept;
    date joining;

public:
    employee()
    {
        id = 1;
        sal = 100000;
        dept = "devloper";
    }
    employee(int id, double sal, string dept, int day, int year, int month) : joining(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void acceptEmp()
    {
        acceptPerson();
        cout << "enter the emp id" << endl;
        cin >> id;
        cout << "enter the sal" << endl;
        cin >> sal;
        cout << "enter the dept" << endl;
        cout << "joining ";
        joining.acceptDate();
    }
    void displayEmployee()
    {
        dispalyPerson();
        cout << "emp id is " << id << endl;
        cout << "emp sal is " << sal << endl;
        cout << "dept of emp is" << dept << endl;
        joining.displayDate();
    }
    int get_Id()
    {
        return id;
    }
    double get_salary()
    {
        return sal;
    }
    string get_Dept()
    {
        return dept;
    }
    date get_dateOfJoining()
    {
        return joining;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_sal(double sal)
    {
        this->sal = sal;
    }
    void set_dept(string dept)
    {
        this->dept = dept;
    }

    void set_joiningDate(date joining)
    {
        this->joining = joining;
    }
};

int main()
{
    // date d1;
    // d1.acceptDate();
    // d1.displayDate();
    // d1.leapYear() ? cout << "this leap year" << endl : cout << "this is not leap year" << endl;
    employee e1;
    e1.acceptEmp();
    e1.displayEmployee();
   // e1.set_joiningDate();
   // e1.get_dateOfJoining();
    return 0;
}
