#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    int A[n];
    int min = INT_MAX;
    int max = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(A[i] > min and A[i] < max) count++;
    }

    cout << count;

    return 0;
}