// This program repeatedly asks the user for an integer input and outputs whether it is a prime number.
// It works by checking whether every number before it is not a factor.
// Could be improved by checking for only the necessary numbers (primes up to n/2 excluding any that came up in previous factor pairs)

#include <iostream>
using namespace std;

int main() {
  bool x = true;
  while (x == true) {
    bool Prime = true;
    int inpNum;
    cout << "Enter Number: ";
    cin >> inpNum;
    for (int i=2; i < inpNum; i++) {
      if (inpNum%i == 0) {
        Prime = false;
        break;
      }
      
    }
    if (Prime == true) {
      cout << "Number is prime\n";
    }
    else {
      cout << "Number is not prime\n";
    }
  }
}
