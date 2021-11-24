#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;


vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int L = 0, R = arr.size()-1;
    while (R - L >= k) 
        if (x - arr[L] <= arr[R] - x) R--;
        else L++;
    return vector<int>(begin(arr) + L, begin(arr) + R + 1);
}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {1,2,3,4,5,7,8};
    vector<int> test;
    
    test = findClosestElements(arr, 4, 6);
    for(auto x: test) cout << x << " ";
   

}