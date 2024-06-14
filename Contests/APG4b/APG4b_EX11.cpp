#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
	for (int i = 1; i <= N; i++) {
		char op;
		int B;
		cin >> op >> B;

		switch (op) {
			case '+':
				A += B;
				break;
			case '-':
				A -= B;
				break;
			case '*':
				A *= B;
				break;
			case '/':
				if (!B) {
					cout << "error" << endl;
					return 0;
				}
				A /= B;
				break;
		}

		cout << i << ':' << A << endl;
	}
}

