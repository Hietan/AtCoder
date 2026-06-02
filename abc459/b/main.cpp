#include <bits/stdc++.h>
#include "HietanLibrary.hpp"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    V<string> s(n);
    cin >> s;

    rep(i, n) {
        int num = (int)(s.at(i).at(0) - 'a');
        if(num < 3) cout << '2';
        else if(num < 6) cout << '3';
        else if(num < 9) cout << '4';
        else if(num < 12) cout << '5';
        else if(num < 15) cout << '6';
        else if(num < 19) cout << '7';
        else if(num < 22) cout << '8';
        else cout << '9';
    }
    cout << endl;

    return 0;
}
