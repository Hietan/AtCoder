#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

	vector<int> A(N);
	for (int& e: A) cin >> e;

	int sum = 0;
	for (int e: A) sum += e;

	int ave = sum / N;

	for (int e: A) cout << abs(e - ave) << endl;
}

