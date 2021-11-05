#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
bool isPrime(int n){
    if (n<2) return false;
    for(int i=2; i*i<=n;i++){
        if(n%i==0) return false;
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
    for(int i=2; i<=n/2; i++){
        if(!isPrime(i) && !isPrime(n-i)){
            cout << i << " " << n-i << endl;
            break;
        }
    }
    



}