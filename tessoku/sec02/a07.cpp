#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int D, N;
    cin >> D >> N;
    vector<int> L(N), R(N);
    rep(i, N) cin >> L[i] >> R[i];
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    int l = 0, r = 0;
    for (int i = 1; i <= D; i++) {
        while (L[l] == i) l++;
        while (R[r]+1 == i) r++;
        cout << l-r << endl;
    }
    return 0;
}
