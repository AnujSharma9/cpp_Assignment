#include <iostream>
using namespace std;
#define N 5
class student
{
private:
    string name;
    string gender;

    static int marks[3];
    int percentage;

protected:
    int rollno;

public:
    student()
    {
        name = "anuj";
        gender = "male";
        rollno = 1;
        int percentage = 89;
    }
    void acceptMarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "enter the value of marks" << endl;
            cin >> marks[i];
        }
    }
    void showMarks()
    {
        cout << "marks are" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << ",";
        }
    }
    void printDetail()
    {
        cout << "your name : ";
        cin >> name;
        cout << "your gender : ";
        cin >> gender;
        cout << "roll no : ";
        cin >> rollno;
        cout << "enter your percentage : ";
        cin >> percentage;
        cout << "enter your marks : ";
        acceptMarks();
    }
    int get_Rollno()
    {
        return rollno;
    }

    string get_Name()
    {
        return name;
    }
};
// int student::rollno;
void sortRecord(student arr[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j].get_Rollno() < arr[i].get_Rollno())
            {
                student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int searchRecord(student arr[], string n)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i].get_Name() == n)
        {
            return i;
        }
        return 0;
    }
}
int main()
{
    // student s;
    // s.acceptMarks();
    // s.showMarks();
}