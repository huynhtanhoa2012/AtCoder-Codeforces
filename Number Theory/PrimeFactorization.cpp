#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
void primeFactorization(int n){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            int count = 0;
            while(n%i == 0){
                count++;
                n /= i;
            }
            cout << i << "^" << count;
        }
    }
}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    primeFactorization(n);
    return 0;
}