#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> A(n);
    int maxValue = 0, minValue = 101;
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i]>maxValue){
            maxValue = A[i];
            maxIndex = i;
        } 
        if(A[i]<=minValue){
            minValue = A[i];
            minIndex = i;
        }   
    }
    int ans = 0;
    if(maxIndex > minIndex) ans = maxIndex + ((n-1) - minIndex) - 1;
    else ans = maxIndex + ((n-1) - minIndex);
    
    cout << ans << endl;
}