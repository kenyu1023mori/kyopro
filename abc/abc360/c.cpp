#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), W(N);
    rep(i, N) {
        cin >> A[i];
        A[i]--;
    }
    rep(i, N) cin >> W[i];
    vector<int> maximum(N);
    rep(i, N) maximum[A[i]] = max(maximum[A[i]], W[i]);

    // 解説みてaccumulate使ってみる
    const int sum_w = accumulate(W.begin(), W.end(), 0);
    const int sum_maximum = accumulate(maximum.begin(), maximum.end(), 0);
    cout << sum_w - sum_maximum << endl;
    return 0;
}
