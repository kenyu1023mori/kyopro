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
    int N, T, P;
    cin >> N >> T >> P;
    vector<int> L(N);
    rep(i, N) cin >> L[i];
    int cnt = 0;
    rep(i, N) {
        if (L[i] >= T) cnt++;
    }
    if (cnt >= P) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i < 101; i++) {
        int cnt = 0;
        rep(j, N) {
            L[j]++;
            if (L[j] >= T) cnt++;
        }
        if (cnt >= P) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
