#include<bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (int)n; i++)

using namespace std;

int main(void){

  long a,b,c,d,e,f;

  cin >> a >> b >> c >> d >> e >> f;

  long num = 998244353;

  a %= num;
  b %= num;
  c %= num;
  d %= num;
  e %= num;
  f %= num;

  long left = (a * b) % num;
  left *= c;
  left %= num;

  long right = (d * e) % num;
  right *= f;
  right %= num;

  long res = left - right;

  if(res < 0) res += num;

  cout << res % num << endl;

  return 0;
}
