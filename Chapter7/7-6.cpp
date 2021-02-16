#include<iostream>
using namespace std;
class B1
{
    public:
        int nV;
        void func() {cout << "Member of B1" << endl;}
};

class B2
{
    public:
        int nV;
        void func() {cout << "Member of B2" << endl;}
};
class D1:public B1, public B2
{
    public:
        int nV;
        void func() {cout << "Member of D1" << endl;}
};

int main()
{
    D1 d1;
    d1.nV = 1;
    d1.func();
    d1.B1::nV=2;
    d1.B1::func();
    d1.B2::nV=2;
    d1.B2::func();
    return 0;
}