#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    vector<int> acc(N+1);
    for (int i = 1; i <= N; i++) acc[i] = acc[i-1]+A[i-1];
    rep(i, Q) {
        int l, r;
        cin >> l >> r;
        cout << acc[r]-acc[l-1] << endl;
    }
    return 0;
}
