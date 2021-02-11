#include<iostream>
#include<stdlib.h>
using namespace std;
struct Student
{
  int id;
  float gpa;
};

template <class T>
class Store
{
  private:
    T item;
    int haveValue;
  public:
    Store(void);
    T GetElem(void);
    void PutElem(T x);
};

template <class T>
Store<T>::Store(void):haveValue(0){}
template <class T>
T Store<T>::GetElem(void)
{
  if(haveValue==0)
  {
    cout << "No item present!" << endl;
    exit(1);
  }

  return item;
}

template <class T>
void Store<T>::PutElem(T x)
{
  haveValue++;
  item = x;
}

int main()
{
  Student g = {1000, 23};
  Store<int> S1, S2;
  Store<Student> S3;
  Store<double> D;
  S1.PutElem(3);
  S2.PutElem(-7);
  cout << S1.GetElem() << " " << S2.GetElem() << endl;
  S3.PutElem(g);
  cout << "The student id is" << S3.GetElem().id << endl;
  cout << "Retrieving object D";
  cout << D.GetElem() << endl;
  return 0;
}
