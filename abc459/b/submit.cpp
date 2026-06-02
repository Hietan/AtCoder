#line 1 "b/.bundle-main.cpp"
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


#line 3 "b/.bundle-main.cpp"
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
