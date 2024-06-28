#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    char p, q;
    cin >> p >> q;
    vector<int> l = {0, 3, 1, 4, 1, 5, 9};
    vector<int> acc = {0, 3, 4, 8, 9, 14, 23};
    int p_num = p - 'A';
    int q_num = q - 'A';
    cout << abs(acc[p_num]-acc[q_num]) << endl;
    return 0;
}
