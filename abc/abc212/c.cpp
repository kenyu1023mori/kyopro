#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

// bをソートして，aiに対して一番近い値を二分探索で探してmin

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    sort(b.begin(), b.end());
    ll ans = LLONG_MAX;
    rep(i, n) {
        auto iter = lower_bound(b.begin(), b.end(), a[i]);

        if (iter != b.end()) {
            int idx1 = distance(b.begin(), iter);
            ans = min(ans, abs(a[i] - b[idx1]));
        }
        if (iter != b.begin()) {
            iter--;
            int idx2 = distance(b.begin(), iter);
            ans = min(ans, abs(a[i] - b[idx2]));
        }
    }
    cout << ans << endl;
    return 0;
}
