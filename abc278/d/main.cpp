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

int cou = 0;
int base = 0;
int qc;
bool is_first = true;
vector<int> a;

void solve(){
  map<int, long> adds;

  while(cou < qc){
    int q, i, x;
    cin >> q >> i;
    cou++;

    switch(q){
      case 1:
        is_first = false;
        base = i;
        return;
      case 2:
        cin >> x;
        if(adds.count(i)){
          adds[i] += x;
        } else {
          adds[i] = x;
        }
        break;
      case 3:
        long res = (is_first ? a.at(i-1) : base);
        if(adds.count(i)){
          res += adds[i];
        }
        cout << res << endl;
        break;
    }
  }

  return;
}

int main(void){

  int n;
  cin >> n;

  a = vector<int>(n);
  vec_in(a);

  bool is_first = true;

  cin >> qc;
  while(cou < qc){
    solve();
  }
  return 0;
}
