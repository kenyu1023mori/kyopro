#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    // 最小値を決め打ちしてN-K個とったやつのmax-minで走査
    ll ans = 1000000000;
    for (int i = 0; i <= K; i++) {
        ans = min(ans, A[i+N-K-1]-A[i]);
    }
    cout << ans << endl;
    return 0;
}
