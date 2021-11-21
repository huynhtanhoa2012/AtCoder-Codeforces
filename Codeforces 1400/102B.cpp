#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
string countDigits(string s){
    int sum = 0;
    for(int i=0; i<s.size(); i++){
        sum +=  s[i] - '0';
    }
    return to_string(sum);
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;

    if(n<2) cout << "0";
    else {
        while(s.size()>1){
            count++;
            s = countDigits(s);
        }
        cout << count;
    }
    
    
    
}