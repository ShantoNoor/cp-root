#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void solve(int tc) {
  int n; cin >> n;
  vector<int> a(n);
  int z = 0;
  for(auto &x: a){
    cin >> x;
    if(x == 0) z++;
  }

  if(z == 0) {
    cout << 0 << endl;
  } else if(z == n) {
    cout << 1 << endl;
  }
  else {
    int o = n-z;
    if(z > o) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tc = 1; 
  cin >> tc;
  while(tc--) 
    solve(tc);

  return 0;
}
