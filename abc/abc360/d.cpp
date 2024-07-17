#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

// 蟻iに対して，T秒までに出会う蟻をO(1)で数える
// T >= N -> 向かってくるやつ全員出会う？
// i < jで数える
// 同じ方向向いた蟻がすれ違うことはない


int main() {
    ll N, T;
    cin >> N >> T;
    string S;
    cin >> S;
    vector<ll> X(N);
    rep(i, N) cin >> X[i];
    // 累積和
    vector<ll> acc(N+1, 0);
    for (int i = 1; i < N+1; i++) {
        acc[i] = acc[i-1]+int(S[i-1]-'0');
    }
    
}
