#include <iostream>
using namespace std;

// global variable
int global_variable = 10;

void print_value() {
  // local variable
  int local_variable = 20;
  
  // static local variable
  static int static_local_variable = 30;
  static_local_variable += 10;
  
  cout << "Local variable value: " << local_variable <<endl;
  cout << "Static local variable value: " << static_local_variable <<endl;
}

// extern variable
extern int extern_variable;

int main() {
  cout << "Global variable value: " << global_variable <<endl;
  
  print_value();
  
  cout << "Extern variable value: " << extern_variable <<endl;
  
  return 0;
}

// extern variable definition
int extern_variable = 40;
