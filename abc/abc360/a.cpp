#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    string S;
    cin >> S;
    int r, m, s;
    rep(i, 3) {
        if (S[i] == 'R') r = i;
        if (S[i] == 'M') m = i;
        if (S[i] == 'S') s = i;
    }
    if (r < m) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
