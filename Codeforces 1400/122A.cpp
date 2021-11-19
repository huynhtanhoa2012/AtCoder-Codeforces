#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

bool checkDigits(int n){
    int digit;
    while(n){
        digit = n%10;
        if(digit!=4 and digit!=7){
            return false;
        }
        n =  n/10;
    }
    return true;
}

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    bool check = false;
    for(int i=1; i<=n; i++){
        if(checkDigits(i)){
            if(n%i==0) check = true;
        }
    }
    
    if(check) cout << "YES";
    else cout << "NO";
    
    
    
    
}