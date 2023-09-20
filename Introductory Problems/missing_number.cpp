#include<bits/stdc++.h>
using namespace std;

int missing_number(vector<int>& nums) {
    int n = nums.size();
    int index = 0;
    while(index < n) {
        if(nums[index] <= n and nums[nums[index]-1] != nums[index]) {
            swap(nums[index],nums[nums[index]-1]);
        }
        else {
            index++;
        }
    }
    for(int i = 0 ; i < n ; i++) {
        if(nums[i] != i + 1) {
            return i+1;
        }
    }
    return n+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n-1);
    for(int i = 0 ; i < n - 1 ; i++) {
        cin >> nums[i];
    }
    cout << missing_number(nums);
    return 0;
}