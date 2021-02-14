#include<iostream>
using namespace std;
class A
{
    protected:
        int x;
};

class B:public A
{
    public:
        void function();
};

void B::function()
{
    x=5;
}

int main()
{
    A a;
    // a.x=5;
    return 0;
}