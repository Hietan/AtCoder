#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define rep1(i, n) for(int i = 1; i <= (int)n; i++)
#define rep_se(i, s, e) for(int i = s; i <= (int)e; i++)

template<typename T>
void vec_in(vector<T> &v){
  rep(i, v.size()) cin >> v.at(i);
}

template<typename T>
void vec2_in(vector<vector<T>> &v){
  rep(i, v.size()) vec_in(v.at(i));
}

template<typename T>
void vec_out(vector<T> v, char c){
  rep(i, v.size()-1) cout << v.at(i) << c;
  cout << v.at(v.size()-1) << endl;
}

template<typename T>
void vec_out(vector<T> v){
  vec_out(v, ' ');
}

template<typename T>
void vec2_out(vector<vector<T>> v, char c){
  rep(i, v.size()) vec_out(v.at(i), c);
}

template<typename T>
void vec2_out(vector<vector<T>> v){
  vec2_out(v, ' ');
}

template<typename T>
T vec_sum(vector<T> v){
  T sum = 0;
  rep(i, v.size()) sum += v.at(i);
  return sum;
}

template<typename T>
double vec_mean(vector<T> v){
  return (double)vec_sum(v) / v.size();
}

void yon(bool b){
  if(b) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int checknum(char c){
  switch(c){
    case 'A':
      return 1;
    case 'T':
      return 10;
    case 'J':
      return 11;
    case 'Q':
      return 12;
    case 'K':
      return 13;
    default:
      int num = c - '0';
      if(num >=2 and num <= 9){
        return num;
      }
  }
  return 0;
}

bool check(vector<bool> &vec, string s){
  int num = checknum(s.at(1)) - 1;
  if(num == -1 or vec.at(num)){
    return false;
  }
  else {
    vec.at(num) = true;
  }
  return true;
}

bool solve(vector<string> str, int n){
  vector<bool> h(13, false), d(13, false), c(13, false), s(13, false);
  bool res;
  rep(i, n){
    res = true;
    switch(str.at(i).at(0)){
      case 'H':
      res = check(h, str.at(i));
      break;
      case 'D':
      res = check(d, str.at(i));
      break;
      case 'C':
      res = check(c, str.at(i));
      break;
      case 'S':
      res = check(s, str.at(i));
      break;
      default:
      return false;
    }
    if(!res) return false;
  }
  return true;
}

int main(void){

  int n;
  cin >> n;

  vector<string> s(n);
  vec_in(s);

  yon(solve(s, n));

  return 0;
}
