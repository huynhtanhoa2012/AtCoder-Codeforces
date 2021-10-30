#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    int max = 0;
    int A[n];
    set<int> s;
    set<int>::iterator it;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i] > max) max = A[i];
    }

    for(int i=0; i<n; i++){
        if(A[i] == max){
            cout << A[i] << " ";
            max--;
            if(max == *(s.begin())){
                for(int i=0; i<s.size();i++){
                    it = s.begin();
                    cout << *it << endl;
                    s.erase(it);
                    max--;
                }
            }
            
        }
        else{
            cout << endl;
            s.insert(A[i]);
        }
    }
    

    return 0;
}