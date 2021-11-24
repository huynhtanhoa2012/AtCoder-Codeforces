#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int distributeCandies(vector<int>& candyType) {
    set<int> s1;
    for(auto x : candyType) s1.insert(x);
    int n1 = s1.size();
    int n2 = candyType.size()/2;

    return n1>n2 ? n2:n1;
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    vector<int> candyType = {1,1,2,2,3,3};
    vector<int> candyType1 = {1,1,2,3};
    vector<int> candyType2 = {6,6,6};
    cout << distributeCandies(candyType) << endl;
    cout << distributeCandies(candyType1) << endl;
    cout << distributeCandies(candyType2) << endl;
    
    
    
    
}