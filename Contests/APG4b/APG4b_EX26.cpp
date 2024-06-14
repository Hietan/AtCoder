#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

map<char, int> map_int;
map<char, vector<int>> map_vec;

bool is_var(char c) {
	return (c >= 'a' and c <= 'z');
}

char read_var_name() {
	char c;
	cin >> c;
	return c;
}

int read_int_term() {
	char c;
	cin >> c;
	if (is_var(c)) return map_int.at(c);
	else return c - '0';
}

int read_int_exp() {
	int val = read_int_term();
	while (true) {
		char op;
		cin >> op;
		switch (op) {
			case ';':
				return val;
			case '+':
				val += read_int_term();
				break;
			case '-':
				val -= read_int_term();
				break;
		}
	}
}

vector<int> read_vec_term() {
	char c;
	cin >> c;

	if (is_var(c)) return map_vec.at(c);

	vector<int> v(0);
	while (true) {
		v.push_back(read_int_term());
		char op;
		cin >> op;
		if (op == ']') break;
	}

	return v;
}

vector<int> operator+(vector<int> l, vector<int> r) {
	rep(i, l.size()) l.at(i) += r.at(i);
	return l;
}

vector<int> operator-(vector<int> l, vector<int> r) {
	rep(i, l.size()) l.at(i) -= r.at(i);
	return l;
}

ostream& operator<<(ostream& os, vector<int> v) {
	cout << "[ ";
	for(int e: v) cout << e << ' ';
	cout << ']';
	return os;
}

vector<int> read_vec_exp() {
	vector<int> val = read_vec_term();
	while (true) {
		char op;
		cin >> op;
		switch (op) {
			case ';':
				return val;
			case '+':
				val = val + read_vec_term();
				break;
			case '-':
				val = val - read_vec_term();
				break;
		}
	}
}

int main() {
	int N;
	cin >> N;

	rep(i, N) {
		string func;
		cin >> func;

		if (func == "int") {
			char c = read_var_name();
			char eq;
			cin >> eq;
			map_int[c] = read_int_exp();
		}
		if (func == "print_int") {
			cout << read_int_exp() << endl;
		}
		if (func == "vec") {
			char c = read_var_name();
			char eq;
			cin >> eq;
			map_vec[c] = read_vec_exp();
		}
		if (func == "print_vec") {
			cout << read_vec_exp() << endl;
		}
	}
}
