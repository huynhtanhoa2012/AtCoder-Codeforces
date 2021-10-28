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
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int pointA = 0, pointB = 0;
    int l=0, r=n-1;
    for(int i=0; i<n;i++){
        if(i%2==0){
            if(arr[l]>arr[r]){
                pointA += arr[l];
                l++;
            }
            else{
                pointA += arr[r];
                r--;
            }
        }
        else {
            if(arr[l]>arr[r]){
                pointB += arr[l];
                l++;
            }
            else{
                pointB += arr[r];
                r--;
            }
        }
    }
    cout << pointA << " " << pointB << endl;

    return 0;
}