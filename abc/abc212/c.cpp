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
        int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        if (j < m) chmin(ans, abs(a[i] - b[j]));
        if (0 <= j - 1) chmin(ans, abs(a[i] - b[j - 1]));
    }
    cout << ans << endl;
    return 0;
}
