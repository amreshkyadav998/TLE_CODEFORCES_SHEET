#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define endl '\n'

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    rep(i, 0, n) cin >> a[i]; 

    int count = 0;
    rep(i, 0, n) {  
        rep(j, i + 1, n) { 
            if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0) {
                count++;
            }
        }
    }
    cout << count << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
