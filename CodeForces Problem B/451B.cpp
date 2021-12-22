#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

bool checkSorting(vector<int> A){
    for(int i=0; i<A.size()-1; i++){
        if(A[i]>A[i+1]) return false;
    }
    return true;
}; 

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    vector<int> A(n), B;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    // Get l and m
    int l = -1, r = -1;
    for(int i=0; i<n-1; i++){
        if(A[i]>A[i+1]){
            l = i;
            break;
        } 
    }
    for(int i=n-1; i>0; i--){
        if(A[i]<A[i-1]){
            r = i;
            break;
        } 
    }

    if(l==-1 and r==-1){
        cout << "yes"<< endl;
        cout << "1 1" << endl; 
    }
    else{
        for(int i=r; i>=l; i--){
            B.push_back(A[i]);
        }
        int j = 0;
        for(int i=l; i<=r; i++){
            A[i] = B[j];
            j++; 
        }
        
        // Check if A is sorted or not
        if(checkSorting(A)){
            cout << "yes" << endl;
            cout << l+1 << " " << r+1;
        }
        else cout << "no";
    }



    
    
    
    
}