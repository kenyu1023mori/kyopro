#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    sort(A.begin(), A.end());
    deque<int> deq;
    rep(i, N) deq.push_back(A[i]);
    // 偶数なら全部，奇数なら最後の1回残す
    rep(i, (K/2)*2) {
        if (i % 2 == 0) deq.pop_front();
        else deq.pop_back();
    }
    // 残ったものが1つのとき
    if (N-K == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (K%2 == 0) {
        cout << deq.back() - deq.front() << endl;
        return 0;
    }
    int s1, s2, e1, e2;
    s1 = deq[0];
    s2 = deq[1];
    e1 = deq[deq.size()-1];
    e2 = deq[deq.size()-2];
    if (e1-s2 > e2-s1) cout << e2-s1 << endl;
    else cout << e1-s2 << endl;
    return 0;
}
