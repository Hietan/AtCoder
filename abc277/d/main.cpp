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

long vec_sum(vector<int> v){
  long sum = 0;
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

int main(void){
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vec_in(a);

  sort(a.begin(), a.end());

  long total_sum = vec_sum(a);

  long res = 0;
  for(int i = 0; i < n; i++){
    long sum = 0;
    for(i = i; i < n; i++){
      sum += a.at(i);
      if(i < n-1 and a.at(i+1) - a.at(i) > 1) break;
    }
    res = res > sum ? res : sum;
  }

  if(a.at(0) == 0 and a.at(n-1) == m - 1){
    long sum = 0;
    int i;
    for(i = 0; i < n; i++){
      sum += a.at(i);
      if(i < n-1 and a.at(i+1) - a.at(i) > 1) break;
    }
    for(int j = n-1; j > i; j--){
      sum += a.at(j);
      if(j > 0 and a.at(j) - a.at(j-1) > 1) break;
    }
    res = res > sum ? res : sum;
  }

  cout << total_sum - res << endl;

  return 0;
}
