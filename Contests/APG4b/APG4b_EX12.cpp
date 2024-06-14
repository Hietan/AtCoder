#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
	int n = 1;
	for (int i = 1; i < (int)S.size(); i += 2) {
		if (S.at(i) == '+') n++;
		else n--;
	}

	cout << n << endl;
}
