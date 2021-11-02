#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;

vector<int> primes;
int maxN = 90000000;
vector<bool> s(maxN + 1, true);

void sieve(){
    s[0] = s[1] = false;
    for(int i=2; i*i<=maxN; i++){
        if(s[i]){
            for(int j=i*i; j<=maxN; j+=i){
                s[j] = false;
            }
        }
    } 
    for(int i=0; i<= maxN; i++){
        if(s[i]){
            primes.push_back(i);
    }
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    sieve(); 
    while(n--){
        int k;
        cin >> k;
        cout << primes[k-1] << endl;
    }
    return 0;
}