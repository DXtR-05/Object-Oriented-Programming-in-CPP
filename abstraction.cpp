// They are attributes of classes or class member
// static member function
#include <bits/stdc++.h>
#include <cmath> // Add this line to include the cmath header file
using namespace std;

// total_customer=0;
// A1= name acc bal;
// A2=name acc bal;
class customer
{
    string name;
    int acc_no, bal;
    int age;

public:
    customer(string name, int acc_no, int bal, int age)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
        this->age = age;
    }
    void deposit(int amnt)
    {
        if (amnt > 0)
        {
            bal += amnt;
        }
        else
            cout << "Invalid amnt" << endl;
    }
    void withdraw(int amnt)
    {
        if (amnt <= bal && amnt > 0)
        {
            bal -= amnt;
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << bal << endl;
    }
};

int main()
{
    customer A1("Akash", 1, 1000, 25);
    customer A2("myself", 3, 1080, 28);
    customer A3("Hey", 4, 9000, 18);
    A1.deposit(100);
    A1.deposit(-20);
    A1.display();

    // abstraction which function is hide from user
    cout << pow(2, 8);
    // similarly sorting and many mode in build function
}
