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
    int minValue = inf;
    int index = 0;
    bool check = true;
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i] < minValue){
            check = true;
            minValue = A[i];
            index = i+1;
        } 
        else if(A[i] == minValue){
            check = false;
        } 
    }
    if (n==1) cout << 1 << endl;
    else if(check) cout << index << endl; 
    else cout << "Still Rozdil" << endl;
    
}