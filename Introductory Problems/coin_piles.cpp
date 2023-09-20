#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> a >> b;
        if(a < b) {
            swap(a,b);
        }
        if(a > 2 * b) {
            cout << "NO" << endl;
        }
        else {
            a %= 3;
            b %= 3;
            if(a < b) {
                swap(a,b);
            }
            if((a == 2 and b == 1) or (a == 0 and b == 0)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}