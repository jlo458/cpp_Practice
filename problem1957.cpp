// My solution to the "delete characters to make fancy string" problem 

#include <iostream> 
#include <vector>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        int length = s.length();
        string final;
        
        vector<char> finalString; 
        char prev2[2] = {'1','2'};

        for (int i = 0; i < length; i++) {
            if (s[i] == prev2[0] && s[i] == prev2[1]) {
                continue;
            }
        

            finalString.push_back(s[i]);
            prev2[0] = prev2[1];
            prev2[1] = s[i];

        }

        for (char val : finalString) { 
            final += val;
        }

        return final;
    } 
};
