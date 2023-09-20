#include<bits/stdc++.h>
using namespace std;

int repetitions(string& s) {
    int len = 1;
    int ans = 1;
    char curr = '#';
    for(char c : s) {
        if(curr == c) {
            len++;
            ans = max(ans,len);
        }
        else {
            curr = c;
            len = 1;
        }
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << repetitions(s);
    return 0;
}