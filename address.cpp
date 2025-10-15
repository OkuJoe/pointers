/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";

  cout << &food;
  return 0;
}

// memmory address  helpps to get the location where the variable is stotre it uses the & operator
// it shows the address in hexadicimal form.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Output the memory address of food with the pointer
  cout << ptr << "\n";
  return 0;
}
// pointer uses a * operator