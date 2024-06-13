#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	map<int, int> c;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		c[a]++;
	}
	
	int ma_num = -1;
	int ma_val = INT_MIN;
	for (pair<int, int> e: c) if (ma_val < e.second) tie(ma_num, ma_val) = e;

	cout << ma_num << ' ' << ma_val << endl;
}
