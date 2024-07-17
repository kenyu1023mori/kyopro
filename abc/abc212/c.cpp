#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

// bをソートして，aiに対して一番近い値を二分探索で探してmin

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = LLONG_MAX;
    rep(i, n) {
        auto iter = lower_bound(b.begin(), b.end(), a[i]);
        if (iter != b.begin()) {
            int idx1 = distance(b.begin(), iter);
            int idx2 = distance(b.begin(), iter-1);
            ans = min({ans, abs(a[i]-b[idx1]), abs(a[i]-b[idx2])});
        }
        else {
            int idx1 = distance(b.begin(), iter);
            ans = min(ans, abs(a[i]-b[idx1]));
        }
    }
    cout << ans << endl;
    return 0;
}
