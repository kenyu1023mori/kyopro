#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
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
    int N;
    cin >> N;
    string s;
    cin >> s;
    for (int i = 1; i < N; i++) {
        string t;
        cin >> t;
        if (s == "sweet" && t == "sweet" && i != N-1) {
            cout << "No" << endl;
            return 0;
        }
        s = t;
    }
    cout << "Yes" << endl;
    return 0;
}
