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
double vec_mean(vector<T> v){
  return (double)vec_sum(v) / v.size();
}

void yon(bool b){
  if(b) cout << "Yes" << endl;
  else cout << "No" << endl;
}

vector<int> solve(int h, int m){
  while(true){
    int low_h = (h/10) * 10 + (m/10);
    int low_m = (h%10) * 10 + (m%10);
    if((0 <= low_h) and (low_h <= 23) and (0 <= low_m) and (low_m <= 59)){
      vector<int> res = {h, m};
      return res;
    }
    m++;
    if(m >= 60){
      h++;
      m -= 60;
    }
    if(h >= 24){
      h -= 24;
    }
  }
}

int main(void){
  int h, m;
  cin >> h >> m;

  vec_out(solve(h, m));

  return 0;
}
