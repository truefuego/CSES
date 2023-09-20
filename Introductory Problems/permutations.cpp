#include<bits/stdc++.h>
using namespace std;

void permutations(int n) {
    int evenIndex = 0;
    int oddIndex = n / 2;
    vector<int> nums(n);
    for(int i = 1 ; i <= n ; i++) {
        if(i % 2 == 0) {
            nums[evenIndex++] = i;
        }
        else {
            nums[oddIndex++] = i;
        }
    }
    for(int i = 1 ; i < n ; i++) {
        if(abs(nums[i-1]-nums[i]) == 1) {
            cout << "NO SOLUTION";
            return;
        }
    }
    for(int i : nums) {
        cout << i << " ";
    }
    return;
}

int main() {
    int n;
    cin >> n;
    permutations(n);
    return 0;
}