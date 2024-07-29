#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

template <typename T>
bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template <typename T>
bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    int H, W;
    cin >> H >> W;
    int Si, Sj;
    cin >> Si >> Sj;
    Si--;
    Sj--;
    vector<vector<char>> C(H, vector<char>(W));
    rep(i, H) rep(j, W) cin >> C[i][j];
    string X;
    cin >> X;
    for (char o : X) {
        if (o == 'U' && Si - 1 >= 0 && C[Si - 1][Sj] == '.') Si--;
        if (o == 'D' && Si + 1 < H && C[Si + 1][Sj] == '.') Si++;
        if (o == 'L' && Sj - 1 >= 0 && C[Si][Sj - 1] == '.') Sj--;
        if (o == 'R' && Sj + 1 < W && C[Si][Sj + 1] == '.') Sj++;
    }
    cout << Si+1 << " " << Sj+1 << endl;
    return 0;
}
