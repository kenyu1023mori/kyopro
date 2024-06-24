#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> C(N);
    vector<string> D(M);
    vector<int> P(M+1);
    for (int i = 0; i < N; i++) cin >> C[i];
    for (int i = 0; i < M; i++) cin >> D[i];
    for (int i = 0; i < M+1; i++) cin >> P[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        bool flag = true;
        for (int j = 0; j < M; j++) {
            if (C[i] == D[j]) {
                ans += P[j+1];
                flag = false;
                break;
            }
        }
        if (flag) ans += P[0];
    }
    cout << ans << endl;
}
