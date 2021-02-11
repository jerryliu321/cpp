#include<iostream>
using namespace std;
void print_stuff(float data_to_ignore);
void print_message(float list_this_data);
void print_float(float data_to_print);
void (*function_pointer)(float);

int main()
{
  float pi = (float)3.14159;
  float two_pi = (float)2.0 * pi;
  print_stuff(pi);
  function_pointer = print_stuff;
  function_pointer(pi);
  function_pointer = print_message;
  function_pointer(two_pi);
  function_pointer(13.0);
  function_pointer = print_float;
  function_pointer(pi);
  print_float(pi);
  return 0;
}

void print_stuff(float data_to_ignore)
{
  cout << "This is the print stuff function.\n";
}
void print_message(float list_this_data)
{
  cout << "this data will be listed is" << list_this_data <<endl;
}
void print_float(float data_to_print)
{
  cout << "this data to be printed is" << data_to_print <<endl;
}