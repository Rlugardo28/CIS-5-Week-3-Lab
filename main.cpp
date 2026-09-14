#include <iostream>
#include <string>

// Lab 3 — Raymundo Lugardo
// CIS 5 Week 03 · Types & variables
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main() 
{
  const int CURRENT_YEAR = 2026;

  // TODO: declare and initialize on the same line
  // std::string name = ...;
  // int age = ...;
  // double height_m = ...;
  // char initial = ...;
  // bool student = ...;
  std::cout << "=== About me ===\n";
   std::string name = "Raymundo Lugardo";
  cout << "Name:" << name << endl;
  int Age = 26;
  cout << "Age:" << Age << endl;
  double height_m = 1.78;
  cout << "Heght(m):" << height_m << endl;
  char initial = 'R';
  cout << "Initial:" << initial << endl;
  bool student = false;
  cout << "Student:" << student << endl;
  cout << "Year:" << CURRENT_YEAR << endl;

  // TODO: labeled prints from the variable names + CURRENT_YEAR
  
  
  
  
  

   return 0;
}
