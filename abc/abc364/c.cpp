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
    ull now_A = 0;
    ull now_B = 0;
    rep(i, 0, N) {
        now_A += A[i];
        now_B += B[i];
        if (now_A > X or now_B > Y) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << N << endl;
    return 0;
}
