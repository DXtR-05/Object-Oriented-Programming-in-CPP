#include <iostream>
using namespace std;

// Suppose that Object2 uses some internal resources of Object1 and is valid as long as Object1 is valid.
// For example, Object2s destructor accesses Object1's internal resource. If it weren't for the guarantee of reverse order of destruction, this would lead to problems.
class customer
{
    string name;
    int *data;

public:
    // constructor
    customer(string name)
    {
        // name = "Akash";
        // data = new int;
        // *data=10;
        this->name = name;
        // cout << "-----------------" << endl;
        cout << "Constructor is called with value :" << name << endl;
    }
    // destructor
    ~customer()
    {
        delete data;
        // cout << "-----------------" << endl;
        cout << "Destructor is called with value :" << name << endl;
    }
};

int main()
{
    customer A1("1"), A2("2"), A3("3");

    return 0;
}
