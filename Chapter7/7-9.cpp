#include<iostream>
using namespace std;
class B0
{
    public:
        int nV;
        void func() {cout << "Member of B0" << endl;}
};

class B1:virtual public B0
{
    public:
        int nV1;
};
class B2:virtual public B0
{
    public:
        int nV2;
};

class D1:public B1, public B2
{
    public:
        int nVd;
        void func() {cout << "Member of D1" << endl;}
};

int main()
{
    D1 d1;
    d1.nV=2;
    d1.func();
    return 0;
}