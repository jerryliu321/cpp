#include<iostream>
using namespace std;
class B0
{
    public:
        int nV;
        void fun() {cout << "Member of B0" << endl;}
};

class B1:public B0
{
    public:
        int nV1;
};

class B2:public B0
{
    public:
        int nV2;
};

class D1:public B1, public B2
{
    public:
        int nVd;
        void fund() {cout << "Member of D1" << endl;}
};

int main()
{
    D1 d1;
    d1.B1::nV = 2;
    d1.B1::fun();
    d1.B2::nV = 3;
    d1.B2::fun();
    return 0;
}