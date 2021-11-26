#include <bits/stdc++.h>  
using namespace std;

/* 
Given two numbers as strings. The numbers may be very large (may not fit in long long int), 
the task is to find sum of these two numbers.

Input  : str1 = "3333311111111111", 
        str2 =   "44422222221111"
Output : 3377733333332222

*/

string addNumbers(string s1, string s2){

    // Make sure s2 is longer
    if(s1.length() > s2.length()){
        swap(s1, s2);
    }

    // 1. reverse both strings
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    // 2. add 2 numbers from 0 to s1 length
    string result = "";
    int carry = 0;
    for(int i=0; i<s1.length(); i++){
        int sum = (s1[i]-'0') + (s2[i]-'0') + carry;
        result.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // 3. continue calculate the remaining of s2 length
    for(int i=s1.length(); i<s2.length(); i++){
        int sum = (s2[i]-'0') + carry;
        result.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // IF a carry is generated
    if(carry){
        result.push_back(carry);
    }

    // Reverse the final result
    reverse(result.begin(), result.end());
    return result;

}


 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    
    string s1, s2;
    cin >> s1 >> s2;
    cout << addNumbers(s1, s2);
    
}