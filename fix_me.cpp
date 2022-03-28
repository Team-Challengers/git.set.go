#include <iostream>
using namespace std;


int main() {

  int first_number, second_number, sumOfTwoNumbers;

  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sumOfTwoNumbers = first_number + second_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " = " << sumOfTwoNumbers;     

  return 0;
}
