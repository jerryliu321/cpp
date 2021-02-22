#include<iostream>
#include<math.h>
class Matrix
{
    public:
        Matrix(int dims=2);
        ~Matrix();
        void setMatrix(double *rmatr);
        void printM();
    protected:
        int index;
        double *MatrixA;
};

class Linequ:public Matrix
{
    public:
        Linequ(int dims=2);
        ~Linequ();
        void setLinequ(double *a, double *b);
        void printL();
        int Solve();
        void showX();
    private:
        double *sums;
        double *solu;
};