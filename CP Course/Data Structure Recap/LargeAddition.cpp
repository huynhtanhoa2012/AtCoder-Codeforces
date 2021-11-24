#include <bits/stdc++.h>  
using namespace std;

/* 
Given two numbers as strings. The numbers may be very large (may not fit in long long int), 
the task is to find sum of these two numbers.

Input  : str1 = "3333311111111111", 
        str2 =   "44422222221111"
Output : 3377733333332222

*/


 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    // 1) Reverse both strings. 
    // 2) Keep adding digits one by one from 0’th index (in reversed strings) 
    // to end of smaller string, append the sum % 10 to end of result and keep track of carry as sum/10. 
    // 3) Finally reverse the result. 
    
    
    
    
}