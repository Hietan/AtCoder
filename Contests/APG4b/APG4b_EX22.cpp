#include <bits/stdc++.h>
using namespace std;

int main(){
	using pii = pair<int, int>;

	int N;
	cin >> N;

	vector<pii> P(N);

	for (pii& p: P) {
		int a, b;
		cin >> a >> b;
		p = make_pair(a, b);
	}

	sort(P.begin(), P.end(), [] (pii l, pii r) {
		return l.second < r.second;
	});

	for (pii p: P) {
		cout << p.first << ' ' << p.second << endl;
	}
}
