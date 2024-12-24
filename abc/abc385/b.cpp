#include <bits/stdc++.h>
#define rep(i, k, n) for (int i = (k); i < (n); i++)
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
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;
    vector<string> S(H);
    rep(i, 0, H) {
        cin >> S[i];
    }
    string T;
    cin >> T;
    int cnt = 0;
    X--, Y--;
    rep(i, 0, static_cast<int>(T.size())) {
        if (T[i] == 'U' && S[X-1][Y] != '#') {
            X--;
        } else if (T[i] == 'D' && S[X+1][Y] != '#') {
            X++;
        } else if (T[i] == 'L' && S[X][Y-1] != '#') {
            Y--;
        } else if (T[i] == 'R' && S[X][Y+1] != '#') {
            Y++;
        }
        if (S[X][Y] == '@') {
            cnt++;
            S[X][Y] = '.';
        }
    }
    cout << X+1 << " " << Y+1 << " " << cnt << endl;
    return 0;
}
