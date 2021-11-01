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
    int sumA = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        sumA +=  A[i];
    } 
    sort(A, A+n, greater<int>());

    int count = 0, sumB = 0;
    for(int i=0; i<n; i++){
        sumB +=  A[i];
        count++;
        if(sumB > (sumA/2)){
            cout << count;
            break;
        }
    }
    return 0;
}