#include <bits/stdc++.h>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A, B;
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
    // 平衡二分探索木
    multiset<int> st;
    for (int i = 0; i < N; i++) st.insert(A[i]);
    ll ans = 0;
    for (int i = 0; i < M; i++) {
        // intでやったらエラーになる，戻り値がイテレータ
        auto v = st.lower_bound(B[i]);
        // B[i]以上の要素がAに存在しないとき，end()が返される
        if (v == st.end()) {
            cout << -1 << endl;
            return 0;
        }
        // イテレータが指している要素の取得は*で
        ans += *v;
        st.erase(v);
    }
    cout << ans << endl;
    return 0;
}
