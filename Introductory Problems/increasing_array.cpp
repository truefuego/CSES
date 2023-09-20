#include<bits/stdc++.h>
using namespace std;

long long int increasing_array(vector<long long int>& nums) {
    long long int ans = 0; 
    int n = nums.size();
    for(int i = 1 ; i < n ; i++) {
        if(nums[i-1] > nums[i]) {
            ans += nums[i-1] - nums[i];
            nums[i] += nums[i-1] - nums[i];
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<long long int> nums(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }
    cout << increasing_array(nums);
    return 0;
}