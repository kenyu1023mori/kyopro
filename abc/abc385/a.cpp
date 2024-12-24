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
    int A, B, C;
    cin >> A >> B >> C;
    if (A + B == C || B + C == A || C + A == B || (A == B && B == C)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
