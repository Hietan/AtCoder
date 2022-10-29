#include<bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)n; i++)

using namespace std;

int solve(vector<vector<bool>> map, int i){
  int res = 0;
  rep(j, 9 - i){
    rep(k, 9 - i){
      if(map.at(j).at(k) && map.at(j+i).at(k) && map.at(j).at(k+i) && map.at(j+i).at(k+i)){
        cout << i << ' ' << j << ' ' << k << endl;
        res++;
      }
    }
  }
  return res;
}

int solve2(vector<vector<bool>> map, int i){
  int res = 0;
  for(int j = i; j < 9 - i; j++){
    for(int k = i; k < 9 - i; k++){
      if(map.at(j-i).at(k) && map.at(j+i).at(k) && map.at(j).at(k-i) && map.at(j).at(k+i)){
        cout << i << ' ' << j << ' ' << k << endl;
        res++;
      }
    }
  }

  return res;
}

int main(void){

  vector<vector<bool>> map(9, vector<bool>(9));

  char c;
  rep(i, 9){
    rep(j, 9){
      cin >> c;
      map.at(i).at(j) = (c == '#' ? true : false);
    }
  }

  int res = 0;
  
  for(int i = 1; i < 9; i++){
    res += solve(map, i);
  }
  for(int i = 1; i <= 4; i++){
    res += solve2(map, i);
  }

  cout << res << endl;

  return 0;
}
