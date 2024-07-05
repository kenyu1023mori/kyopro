#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> aw(N);
    rep(i, N) {
        cin >> aw[i].first;
        aw[i].first--;
    }
    rep(i, N) aw[i].second;
    sort(aw.begin(), aw.end());
    ll ans = 0;
    int max = aw[0].second;
    int max_i = aw[0].first;
    for (int i = 1; i < N; i++) {
        if (max_i != aw[i].first) {
            max_i = aw[i].first;
            max = aw[i].second;
            continue;
        }
        if (max < aw[i].second) {
            ans += max;
            max = aw[i].second;
        }
        else {
            ans += aw[i].second;
        }

    }
    cout << ans << endl;
    return 0;
}
