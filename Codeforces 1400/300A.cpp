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
    vector<int>  A, B, C;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x<0) A.push_back(x);
        else if(x>0) B.push_back(x);
        else C.push_back(x);
    }

    if(A.size()%2==0){
        int temp  = A[A.size()-1];
        A.pop_back();
        C.push_back(temp);
    }
    if(B.empty()){
        int temp1 = A[A.size()-1];
        int temp2 = A[A.size()-2];
        A.pop_back();
        A.pop_back();

        B.push_back(temp1);
        B.push_back(temp2);
    }

    cout << A.size() << " ";
    for(int i=0; i<A.size(); i++){
        cout << A[i] << " ";
    }

    cout << "\n"<< B.size() << " ";
    for(int i=0; i<B.size(); i++){
        cout << B[i] << " ";
    }
    cout << "\n"<< C.size() << " ";
    for(int i=0; i<C.size(); i++){
        cout << C[i] << " ";
    }
    
    
    
}