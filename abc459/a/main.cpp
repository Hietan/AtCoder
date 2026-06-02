#include <bits/stdc++.h>
#include "HietanLibrary.hpp"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string hello = "HelloWorld";

    int x;
    cin >> x;
    x--;

    rep(i, x) cout << hello.at(i);
    rep_s(i, x+1, hello.size()) cout << hello.at(i);
    cout << endl;

    return 0;
}
