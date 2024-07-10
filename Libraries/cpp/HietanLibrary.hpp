#pragma once
#include <bits/stdc++.h>
using namespace std;

// rep macro
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep_s(i, s, n) for (int i = (int)s; i < (int)n; i++)
#define rep_e(i, e) for (int i = 0; i <= (int)e; i++)
#define rep_se(i, s, e) for (int i = (int)s; i <= (int)e; i++)

// print YES or NO
#define YON(b) cout << (b ? "YES" : "NO") << endl;
#define Yon(b) cout << (b ? "Yes" : "No") << endl;
#define yon(b) cout << (b ? "yes" : "no") << endl;

// 1 dimensional vector
#define V vector
#define all(v) v.begin(), v.end()

template <typename T>
istream& operator>>(istream& is, V<T>& v) {
	for (T& e: v) is >> e;
	return is;
}

template <typename T>
ostream& operator<<(ostream& os, V<T> v) {
	rep(i, v.size() - 1) os << v.at(i) << ' ';
	os << v.back() << endl;
	return os;
}

// 2 dimensional vector
template <typename T>
class V2 : public V<V<T>> {
	public:
		V2(int i, int j): V<V<T>>(i, V<T>(j)) {}
		V2(int i, int j, T x): V<V<T>>(i, V<T>(j, x)) {}
};

template <typename T>
istream& operator>>(istream& is, V2<T>& v) {
	for (V<T>& r: v) for (T& e: r) is >> e;
	return is;
}

template <typename T>
ostream& operator<<(ostream& os, V2<T> v) {
	for (V<T> r: v) os << r;
	return os;
}
