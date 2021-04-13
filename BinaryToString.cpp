#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   string stringToBinary(int n)
   {
        std::string str = std::bitset<8>(n).to_string();
        return str;
   }
    // The template parameter (the number between <angle brackets>) 
    // specifies the number of bits you want to use.


    int binaryToString(string bnum)
    {
        int n = std::bitset<8>(bnum).to_ulong();
        return n;
    }

    // Once again, we are using an 8-bit number. 
    // A notable limitation here is that the number of bits 
    // is a compile-time value. That means you can’t determine 
    // the length of the string at run-time and use that number 
    // of bits. You have to determine in advance how many you’re likely to need.
    
};

int main(){
    Solution ob;
    cout<<ob.stringToBinary(55)<<endl;
    cout<<ob.binaryToString("10011001")<<endl;
    return 0;
}