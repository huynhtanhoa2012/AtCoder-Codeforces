#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;

int countMin(int i, int arr[], int n){
    int ans = 0;
    if(i==0){
        ans = abs(arr[i] - (arr[i+1]));
    }
    else if(i==n-1){
        ans = abs(arr[i] - (arr[i-1]));
    }
    else {
        ans = min(abs(arr[i] - (arr[i+1])), abs(arr[i] - (arr[i-1])));
    }
    return ans;
}
int countMax(int i, int arr[],  int n){
    int ans = 0;
    ans = max(abs(arr[i]-arr[0]), abs(arr[i]-arr[n-1]));
    return ans;
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << countMin(i, arr, n) << " ";
        cout << countMax(i, arr, n) << endl;
    }

    return 0;
}