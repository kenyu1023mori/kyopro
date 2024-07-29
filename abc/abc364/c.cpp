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
    ull N, X, Y;
    cin >> N >> X >> Y;
    vector<ull> A(N);
    vector<ull> B(N);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    vector<ull> acc_A(N+1);
    vector<ull> acc_B(N+1);
    rep(i, 1, N+1) {
        ull a = A[i-1];
        acc_A[i] = acc_A[i-1]+a;
    }
    rep(i, 1, N + 1) {
        ull b = B[i-1];
        acc_B[i] = acc_B[i - 1] + b;
    }
    int i = upper_bound(acc_A.begin(), acc_A.end(), X) - acc_A.begin();
    int j = upper_bound(acc_B.begin(), acc_B.end(), Y) - acc_B.begin();
    if (min(i, j) <= N) cout << min(i, j) << endl;
    else cout << N << endl;
    return 0;
}
