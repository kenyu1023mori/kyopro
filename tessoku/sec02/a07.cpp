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
    rep(i, N) R[i]++;
    vector<int> LL(D+1);
    int l = 0;
    for (int i = 1; i <= D; i++) {
        while (L[l] == i) l++;
        LL[i] = l;
    }
    int r = 0;
    vector<int> RR(D+1);
    for (int i = 1; i <= D; i++) {
        while (R[r] == i) r++;
        RR[i] = r;
    }
    for(int i = 1; i <= D; i++) cout << LL[i]-RR[i] << endl;
    return 0;
}
