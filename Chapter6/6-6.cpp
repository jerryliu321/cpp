#include<iostream>
void vobject;
void *pv;
int *pint; int i;
int main()
{
  pv = &i;
  pint = (int *)pv;
  return 0;
}
