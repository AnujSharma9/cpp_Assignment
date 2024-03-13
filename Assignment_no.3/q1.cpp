#include <iostream>
using namespace std;
class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    static int generate_accno;

public:
    BankAccount() : accno(++generate_accno) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter initial Balance - ";
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }
};

int BankAccount::generate_accno = 1000;

int main()
{
    // todo -> do it in menu driven code
    BankAccount *accptr;
    for (int i = 0; i < 3; i++)
    {
        accptr = new BankAccount;
        accptr->acceptaccountDeatils();
        accptr->displayAccountDeatils();
        delete accptr;
        accptr = NULL;
    }

    return 0;
}

int main1()
{
    BankAccount acc1("rohan", 10000);
    BankAccount acc2("nilesh", 15000);
    BankAccount acc3("nitin", 20000);
    BankAccount acc4("Rajiv", 20000);
    BankAccount acc5("yogesh", 20000);

    acc1.displayAccountDeatils();
    acc2.displayAccountDeatils();
    acc3.displayAccountDeatils();
    acc4.displayAccountDeatils();
    acc5.displayAccountDeatils();

    return 0;
}