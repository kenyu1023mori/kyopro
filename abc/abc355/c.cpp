#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

// 縦，横，斜めがビンゴかをO(1)で
// 印がつけられているマスの個数
// ビンゴ判定はAiが含まれている列のみ

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    vector<int> cnt_row(N), cnt_column(N);
    int cnt_diag1 = 0;
    int cnt_diag2 = 0;
    // Aiが含まれている列の値を更新
    for (int i = 0; i < T; i++) {
        int num;
        cin >> num;
        num--;
        // num行目
        cnt_row[num/N]++;
        // num列目
        cnt_column[num%N]++;
        // 斜め
        if (num % (N+1) == 0) cnt_diag1++;
        if (num%(N-1) == 0 && num != (N*N-1) && num != 0) cnt_diag2++;

        // ビンゴか
        if (cnt_row[num/N] == N || cnt_column[num%N] == N || cnt_diag1 == N || cnt_diag2 == N) {
            cout << ++i << endl;;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
