#include <iostream>
using namespace std;

struct date
{

    int day;
    int month;
    int year;

    void initDate(struct date *ptrDate)
    {
        ptrDate->day = 23;
        ptrDate->month = 03;
        ptrDate->year = 2024;
    }
    void printDateOnConsole(struct date d)
    {
        cout << "day " << d.day << endl;
        cout << "month " << d.month << endl;
        cout << "year " << d.year << endl;
    }

    void acceptDateFromConsole(struct date *ptrDate)
    {
        cout << "enter the value of date: " << endl;
        cin >> ptrDate->day >> ptrDate->month >> ptrDate->year;
        cout << endl;
    }
    bool inLeapYear(struct date *ptrDate)
    {
        int year = ptrDate->year;

        if (year / 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int menu()
{
    int choice;
    cout << "0. EXIT\n";
    cout << "1. Initialized Date\n";
    cout << "2. print date \n";
    cout << "3. console accept date \n";
    cout << "4. The given year is leap year 0 mean false 1 mean true\n";
    cout << "Enter your choice - \n";
    cin >> choice;
    return choice;
}

int main()
{
    struct date d1;
    int choice;

    while ((choice = menu()) != 0)
    {

        switch (choice)
        {
        case 1:
            d1.initDate(&d1);
            break;
        case 2:
            d1.printDateOnConsole(d1);
            break;
        case 3:
            d1.acceptDateFromConsole(&d1);
            break;
        case 4:
        {
            bool date = d1.inLeapYear(&d1);
            if (date == 0)
            {
                cout << "this is the leap Year" << endl;
            }
            else
            {
                cout << "this is not a leap year" << endl;
            }
        }
        break;
        default:
            printf(" invalid...choice....");
            break;
        }
    };
}