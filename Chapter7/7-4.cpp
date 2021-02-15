#include<iostream>
using namespace std;
class B1
{
    public:
        B1(int i) {cout << "constructing B2" << i << endl;}
};

class B2
{
    public:
        B2(int j) {cout << "constructing B2" << j << endl;}
};

class B3
{
    public:
        B3() {cout << "constructing B3 *" << endl;}
};

class C:public B2, public B1, public B3
{
    public:
        C(int a, int b, int c, int d):B1(a), memberB2(d), memberB1(c),B2(b){}
        B1 memberB1;
        B2 memberB2;
        B3 memberB3;
};

int main()
{
    C obj(1,2,3,4);
}