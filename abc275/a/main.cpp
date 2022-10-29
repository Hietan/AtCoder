#include<bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)n; i++)

using namespace std;

int main(void){

  int n;
  cin >> n;

  vector<int> h(n);
  rep(i, n) cin >> h.at(i);

  int max = 0;
  int max_ind = 0;

  rep(i, n){
    if(h.at(i) > max){
      max = h.at(i);
      max_ind = i;
    }
  }

  cout << max_ind + 1 << endl;

  return 0;
}
