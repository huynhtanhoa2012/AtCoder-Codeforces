#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;

int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n =  n/10;
    }
    return  sum;
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    int count = 0;
    while(n > 9){
        count++;
        n = sumDigit(n);
    }
    cout << count << endl;
}