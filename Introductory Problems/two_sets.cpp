#include<bits/stdc++.h>
using namespace std;

void twosets(int n) {
    long long int sum = (long long int)n * ((long long int)n + 1) / 2;
    if(sum&1) {
        cout << "NO";
        return;
    }
    sum /= 2;
    vector<int> nums;
    for(int i = 1 ; i <= n ; i++) {
        nums.push_back(i);
    }
    vector<int> first,second;
    int index = n - 1;
    while(sum > 0) {
        if(nums[index] <= sum) {
            first.push_back(nums[index]);
            sum -= nums[index];
            nums[index] = 0;
        }
        index--;
    }
    for(int i : nums) {
        if(i > 0) {
            second.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << first.size() << endl;
    for(int i : first) {
        cout << i << " ";
    }
    cout << endl;
    cout << second.size() << endl;
    for(int i : second) {
        cout << i << " ";
    }

}

int main() {
    int n;
    cin >> n;
    twosets(n);
    return 0;
}