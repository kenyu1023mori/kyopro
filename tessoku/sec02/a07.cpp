#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int D, N;
    cin >> D >> N;
    vector<int> A(D+1);
    rep(i, N) {
        int l, r;
        cin >> l >> r;
        A[l]++;
        A[r]--;
    }
    return 0;
}
