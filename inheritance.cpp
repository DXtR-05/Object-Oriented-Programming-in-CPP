#include <iostream>
using namespace std;

class human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){
        a=10;
        b=20;
        c=30;
    }
};

int main()
{
    human akash;
    akash.c=10;
    // akash.fun();
}
