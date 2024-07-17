#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no;
    int bal;

public:
    // default constructor
    customer()
    {
        // cout<<"Default constructor called."<<endl;
        name = "Akash";
        acc_no = 123456;
        bal = 1000;
    }
    // parameterized constructor
    //  customer(string n, int a, int b){
    //      // cout<<"Parameterized constructor called."<<endl;
    //      name = n;
    //      acc_no = a;
    //      bal = b;
    //  }
    // USING THIS POINTER
    customer(string name, int acc_no, int bal)
    {
        // cout<<"Parameterized THIS pointer constructor called."<<endl;
        this->name = name;
        this->acc_no = acc_no;
        this->bal = bal;
    }
    // constructor overloading
    customer(string n, int a)
    {
        // cout<<"Constructor overloading called."<<endl;
        name = n;
        acc_no = a;
    }

    // inline constructor
    //  inline customer(string a, int b, int c) : name(a), acc_no(b), bal(c) {
    //      // cout<<"Inline constructor called."<<endl;
    //  }

    // creating copy constructor
    customer(customer &b)
    {
        // cout<<"Copy constructor called."<<endl;
        name = b.name;
        acc_no = b.acc_no;
        bal = b.bal;
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
    customer A1;
    customer A2("Myself", 654321, 2000);
    customer A3("HERE I'M", 290);
    A1.display();
    cout << "-----------------" << endl;
    A2.display();
    cout << "-----------------" << endl;
    A3.display();
    cout << "-----------------" << endl;
    customer A4(A3);
    A4.display();
    cout << "-----------------" << endl;
    // another way to write copy constructor
    customer A5;
    A5 = A3;
    A5.display();
    return 0;
}
