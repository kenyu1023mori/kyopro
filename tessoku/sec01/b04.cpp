#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    string N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N.size(); i++) {
        ans += (int(N[N.size()-1-i]-'0') * (1<<i));
    }
    cout << ans << endl;
    return 0;
}
