#include <iostream>
using namespace std;

// creating a class
// structure of a class
class Student
{
    // by default its value is set to PRIVATE
private:
    string name;
    int age, roll_no;
    string grade;

public:
    // getter and setter fuctions
    void setname(string n)
    {
        name = n;
    }
    void setage(int a)
    {
        age = a;
    }
    void setroll_no(int r)
    {
        roll_no = r;
    }
    void setgrade(string s)
    {
        grade = s;
    }

    // getter
    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
    void getroll_no()
    {
        cout << roll_no << endl;
    }
    string getgrade()
    {
        return grade;
    }

}; //---> semicolon is must

int main()
{
    Student s1;
    // s1.name = "Akash";
    // s1.age = 22;
    // s1.roll_no = 1;
    // s1.grade = "A+";

    // cout << s1.name << endl;

    s1.setname("Akash");
    s1.setage(22);
    s1.setroll_no(1);
    s1.setgrade("A+");

    // printing the values using getter function
    s1.getname();
    s1.getage();
    cout << s1.getgrade() << endl;
    s1.getroll_no();
}
