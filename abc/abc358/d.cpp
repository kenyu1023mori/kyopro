#include <bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, M;
    cin >> N >> M;
    deque<int> A, B;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        B.push_back(b);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    ll ans = 0;
    while (B.size() > 0) {
        if (A.size() == 0) {
            cout << -1 << endl;
            return 0;
        }
        // 渡せない
        if (B[0] > A[0]) {
            A.pop_front();
            continue;
        }
        // 渡せた
        ans += A[0];
        A.pop_front();
        B.pop_front();
    }
    cout << ans << endl;
    return 0;
}
