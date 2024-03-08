#include<iostream>
using namespace std;

class student{
private:
    int rollNo;
    string name;
    int marks;
public:
    void initStudent(){
        rollNo= 23566;
        name= "Anuj";
        marks= 98;
    }    

    void printStudentOnConsole(){
        cout<< "Name:- "<<this->name<<endl;
        cout<< "RollNo:-"<<this->rollNo<<endl;
        cout<< "marks:-"<<this->marks<<endl;
    }

    void printStudentFromConsole(){
        cout<<"Enter the name of the Student"<<endl;
        cin>> name;
        cout<<"Enter the Roll no. of the Student"<<endl;
        cin>> rollNo;
        cout<<"Enter the marks of the Student"<<endl;
        cin>> marks;

    }
};

int menu()
{
    int choice;
    cout<<"0. EXIT\n";
    cout<<"1. Initialized Student info\n";
    cout<<"2. Print Details  \n" ;
    cout<<"3. Accept Student Deatils from Console \n";
    cout<<"Enter your choice - \n";
    cin >>choice;
    return choice;
}

int main(){
    student s1;
    int choice;
    while((choice=menu())!=0){
     
     switch (choice)
     {
    case 1:
        s1.initStudent();
        break;
    case 2:
        s1.printStudentOnConsole();
    case 3:
        s1.printStudentFromConsole();     
     default:
        cout<<"invalid choice"<<endl;
        break;
     }
    
    }
}