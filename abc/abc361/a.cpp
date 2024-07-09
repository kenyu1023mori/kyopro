#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    A.insert(A.begin()+K, X);
    rep(i, N+1) cout << A[i] << " ";
    return 0;
}
