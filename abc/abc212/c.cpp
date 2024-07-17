#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
template <typename T>
bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

// bをソートして，aiに対して一番近い値を二分探索で探してmin

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    sort(a, a+n);
    sort(b, b+m);
    ll ans = LLONG_MAX;
    rep(i, n) {
        int j = lower_bound(b, b+m, a[i]) - b;
        if (j < m) chmin(ans, abs(a[i]-b[j]));
        if (0 <= j-1) chmin(ans, abs(a[i]-b[j-1]));
    }
    cout << ans << endl;
    return 0;
}
