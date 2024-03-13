#include <iostream>
using namespace std;

class TollBooth
{
private:
     unsigned int noOfCar;
     double totalMoney;

public:
     TollBooth()
     {
          cout << "welcome to the TollBooth" << endl;
          noOfCar = 0;
          totalMoney = 0;
     }

     void tollPayingCar()
     {
          ++noOfCar;
          moneyCollect();
     }
     void moneyCollect()
     {
          totalMoney = totalMoney + 0.50;
     }
     void noPayingCar()
     {
          ++noOfCar;
     }

     void showTotalMoney()
     {
          cout << "total money collected is :-" << totalMoney << "cent"<< endl;
     }
     void showTotalCar()
     {
          cout << "total no of cars are :-" << noOfCar << endl;
     }
};

// unsigned tollBooth::noOfCar = 0;
// double tollBooth::totalMoney = 0;

int menu()
{

     int choice;
     cout << "0. To exit" << endl;
     cout << "1. Car that Paying Toll" << endl;
     cout << "2. Car that pass without paying toll " << endl;
     cout << "3.Total ammount of money collected " << endl;
     cout << "4.Total ammount of car passed" << endl;
     cout<<endl;
     cout<<"enter your choice"<<endl;
     cin >> choice;

     return choice;
}

int main()
{
     int choice;

     TollBooth t1;

     while ((choice = menu()) != 0)
     {
          switch (choice)
          {
          case 1:
               t1.tollPayingCar();
               break;
          case 2:
               t1.noPayingCar();
               break;
          case 3:
               t1.showTotalCar();
               break;
          case 4:
               t1.showTotalMoney();
               break;

          default:
               break;
          }
     }

     return 0;
}