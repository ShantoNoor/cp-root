#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


void solve(int tc) {
  int n; cin >> n;
  vector<vector<char>> a(n, vector<char>(n));
  for(auto &x: a) {
    for(auto &y: x) {
      cin >> y;
    }
  }
  for(int i=0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      if(a[i][j] == '.' && i > 0 && j > 0 && i < n-1 && j < n-1 && 
          a[i-1][j] == '.' && a[i+1][j] == '.' &&  a[i][j-1] == '.' && a[i][j+1] == '.') {
        a[i][j] = 'T';
        a[i-1][j] = 'T';
        a[i+1][j] = 'T';
        a[i][j-1] = 'T';
        a[i][j+1] = 'T';
      }
    }
  }
  
  for(auto &x: a) {
    for(auto &y: x) {
      if(y == '.') {
        cout << "NO" << endl;
        return;
      }
    }
  }
  cout << "YES" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tc = 1; 
  // cin >> tc;
  for(int t=1; t<=tc; ++t)
    solve(t);

  return 0;
}
