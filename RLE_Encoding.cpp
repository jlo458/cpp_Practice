// This program takes a string input (aaaabbbbcccc) and compresses it via RLE (4a4b4c)

#include <iostream>
#include <string> 
using namespace std;

int main() {
  string uncomp_input;
  cout << "Enter Input: ";
  cin >> uncomp_input;   // Uncompressed string 

  int count = 0;
  char theLetter = '\0';
  string compStr = "\0";
  string compLet = "\0";
  for (char c : uncomp_input) {
    if (c == theLetter) {
      count += 1;    // Increases the "count" each time letter is repeated
    }

    else { 
      string val = to_string(count);   
      compLet = val + theLetter;    // Takes string value of "count" and concatenates it with corresponding letter
      compStr += compLet;     // Concatenates that to full decompressed string
      count = 1; 
      theLetter = c;
    }
  }

  string val = to_string(count); 
  compLet = val + theLetter;
  compStr += compLet;
  string finishedCompStr = compStr.erase(0,1);    // Erases first index because this will always be "0" 
  cout << finishedCompStr;
  
}
