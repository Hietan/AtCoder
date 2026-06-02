#line 1 "a/.bundle-main.cpp"
#include <bits/stdc++.h>
#line 1 "/home/kazuma-ya/Documents/ghq/GitHub/Hietan/AtCoder_Templates/HietanLibrary.hpp"



#line 5 "/home/kazuma-ya/Documents/ghq/GitHub/Hietan/AtCoder_Templates/HietanLibrary.hpp"
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); ++i)
#define rep_e(i, e) for (int i = 0; i <= (int)(e); ++i)
#define rep_se(i, s, e) for (int i = (int)(s); i <= (int)(e); ++i)

#define YON(b) cout << ((b) ? "YES" : "NO") << '\n'
#define Yon(b) cout << ((b) ? "Yes" : "No") << '\n'
#define yon(b) cout << ((b) ? "yes" : "no") << '\n'

template <class T> using V = vector<T>;
#define all(v) (v).begin(), (v).end()

template <class T>
istream& operator>>(istream& is, vector<T>& v) {
    for (T& e : v) is >> e;
    return is;
}

template <class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    rep(i, v.size()) {
        if (i) os << ' ';
        os << v[i];
    }
    return os;
}

template <class T>
class V2 : public vector<vector<T>> {
public:
    V2(int i, int j) : vector<vector<T>>(i, vector<T>(j)) {}
    V2(int i, int j, const T& x) : vector<vector<T>>(i, vector<T>(j, x)) {}
};

template <class T>
istream& operator>>(istream& is, V2<T>& v) {
    for (vector<T>& row : v) {
        for (T& e : row) is >> e;
    }
    return is;
}

template <class T>
ostream& operator<<(ostream& os, const V2<T>& v) {
    for (const vector<T>& row : v) {
        os << row << '\n';
    }
    return os;
}


#line 3 "a/.bundle-main.cpp"
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
