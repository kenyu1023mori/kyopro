#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    ll ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int k = K-i-j;
            if (1 <= k && k <= N) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
