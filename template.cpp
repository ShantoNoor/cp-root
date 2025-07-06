#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ff first
#define ss second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define pf push_front
#define ll long long
#define ld long double
#define ull unsigned ll
#define sq(x) ((x)*(x))
#define eb emplace_back
#define ef emplace_front
#define vec(x) vector<x>
#define pr(x, y) pair<x, y>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define mem(a) memset(a, 0, sizeof(a))
#define memn(a) memset(a , -1 ,sizeof(a))
#define zerobits(x) __builtin_ctzll(x)
#define onebits(x) __builtin_popcountll(x)
#define sp(x) fixed<<setprecision(x)
#define pqb priority_queue<int>
#define pqs priority_queue<int, vec(int), greater<int>>
#define i128 __int128
#define Test cout << "Case " << tc << ": "
#define Fori(v, s, e) for(int v = s; v <= e; ++v)
#define Forli(v, s, e) for(ll v = s; v <= e; ++v)
#define Forr(v, s, e) for(int v = s; v >= e; --v)
#define Forlr(v, s, e) for(ll v = s; v >= e; --v)
#define FTC2 int t; while(cin >> t && t) solve(t);
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef DEBUG
  #include <debug.h>
#else
  #define deb(args...)
  #define debv(x)
  #define debr(arr, s, e)
  #define TIME
#endif

int solve(int tc = 1) {
  

  return 0;
}

int main() {
  deb("Author Shanto!...")
  
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int tn = 1; 

  cin >> tn; 

  for(int tc = 1; tc <= tn; ++tc) solve(tc); 
  TIME
  return 0;
}
