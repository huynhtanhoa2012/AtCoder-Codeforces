#include <bits/stdc++.h>

using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int solve(vector<int> nums){
    int sum = 0;
    while(nums.size() > 1){
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();
        int sumTwo = nums[n-1] + nums[n-2];
        nums.pop_back();
        nums.pop_back();
        nums.push_back(sumTwo);
        sum += sumTwo;
    }
    return sum;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> nums = {1, 2, 3, 4, 5};
    cout << solve(nums);

}