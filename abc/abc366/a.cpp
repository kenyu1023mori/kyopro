#include <bits/stdc++.h>
#define rep(i, k, n) for (ll i = (k); i < (n); i++)
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
    int N, T, A;
    cin >> N >> T >> A;
    if (N-A > A) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
