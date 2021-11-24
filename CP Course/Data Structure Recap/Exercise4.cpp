#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int maximumScore(int a, int b, int c) {
    int ans = 0;
    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end(), greater<int>());
    
    while(nums[0] > 0 and nums[1] > 0){
        nums[0]--;
        nums[1]--;
        ans++;
        sort(nums.begin(), nums.end(), greater<int>());
    }

    return ans;
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    cout << maximumScore(2,4,6) << endl;
    cout << maximumScore(4,4,6) << endl;
    cout << maximumScore(1,8,8) << endl;
    
    
}