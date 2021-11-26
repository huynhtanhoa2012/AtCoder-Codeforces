#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int charToDigit(char x){
    return x-'0';
}
char digitToChar(int x){
    return x+'0';
}

string divideTwoNumbers(string n){
    int remainer = 0;
    string result = "";
    for(int i=0; i<n.length(); i++){
        int divisor = (remainer*10) + charToDigit(n[i]);
        if(divisor<2) remainer++; 
        else {
            if(divisor%2==0){
                result.push_back(digitToChar(divisor/2));
                remainer = 0;
            } 
            else{
                result.push_back(digitToChar(divisor/2));
                remainer = 1;
            }
        }
    }
    return result;
}

string addTwoNumbers(string n, string k){
    string result = "";

    // Reverse 2 string;
    reverse(n.begin(), n.end());
    reverse(k.begin(), k.end());
    
    // Add 2 number n+k
    // loop from 0 to k 
    int carry = 0;
    for(int i=0; i<k.length(); i++){
        int sum = (n[i]-'0') + (k[i]-'0') + carry;
        result.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for(int i=k.length(); i<n.length(); i++){
        int sum = (n[i]-'0') + carry;
        result.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if(carry) result.push_back(carry);

    reverse(result.begin(), result.end());
    
    return result; 
}

string subtractTwoNumbers(string n, string k){
    string result = "";
    // Reverse 2 string;
    reverse(n.begin(), n.end());
    reverse(k.begin(), k.end());

    // loop from 0 to k 
    int carry = 0;
    for(int i=0; i<k.length(); i++){
        if(charToDigit(n[i]) < charToDigit(k[i])){
            int subs = charToDigit(n[i] + 10) - charToDigit(k[i]);
            result.push_back(subs+'0');
            carry = 1;
            
        }
        else{
            int subs = charToDigit(n[i]) - charToDigit(k[i]) - carry;
            result.push_back(subs+'0');
            carry = 0;
        }
    }
    for(int i=k.length(); i<n.length(); i++){
        int subs = charToDigit(n[i]) - carry;
        carry = 0;
    }

    reverse(result.begin(), result.end());
    return result;
}

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    
    for(int i=0; i<10; i++){
        string n, k;
        cin >> n >> k;
        string x = divideTwoNumbers(addTwoNumbers(n, k));
        string y = subtractTwoNumbers(x, k);
        cout << x << endl;
        cout << y << endl;
    }
    
    
    
    
    
    
}