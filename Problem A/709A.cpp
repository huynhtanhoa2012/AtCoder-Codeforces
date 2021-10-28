#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int waste = 0, count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] <= b) waste += arr[i];
        if(waste > d){
            count++;
            waste=0;
        }
    }
    cout << count << endl;

    return 0;
}