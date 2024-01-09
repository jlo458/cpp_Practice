// This program takes a decimal input and converts it to binary 
// This is accomplished my repeatedly dividing the initial number by 2 and at each repeat, append the remainder to my binary value

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int decNum; 
  cout << "Enter Number: ";
  cin >> decNum;  
  string binNum;
  for (int i = 0; i < 8; i++) {
    int value = (decNum%2);
    if (value == 1) {
      binNum.append("1");
    }
    else {
      binNum.append("0");
    }
    
    decNum = floor(decNum/2);
  }

  // Number has been made in reverse so it must be reversed before output
  reverse(binNum.begin(), binNum.end());
  cout << binNum;
  return 0;
}
