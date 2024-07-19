//They are attributes of classes or class member
//static member function
#include <iostream>
using namespace std;

// total_customer=0;
// A1= name acc bal;
// A2=name acc bal;
class customer{
    string name;
    int acc_no,bal;
    static int total_customer;
    public:
    customer(string name, int acc_no,int bal){
        this->name=name;
        this->acc_no=acc_no;
        this->bal=bal;
        total_customer++;
    }

    static void access(){
        cout<<total_customer<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Balance: "<<bal<<endl;
        cout<<"Total Customer: "<<total_customer<<endl;
    }
    void display_tot(){
        cout<<total_customer<<endl;
    
    }
};

int customer :: total_customer=0;

int main()
{
    customer A1("Akash",1,1000);
    customer A2("myself",3,1080);
    customer A3("Heyy",4,9000);
    customer::access();
    A1.display_tot();
    // A1.display();
    // A2.display();
    // A3.display();
}
