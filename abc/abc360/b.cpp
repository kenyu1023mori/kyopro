#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

int main() {
    string S, T;
    cin >> S >> T;
    for (int w = 1; w < int(S.size()); w++) {
        for (int c = 1; c <= w; c++) {
            string tmp;
            // Sをw文字毎に区切る
            int i = 0;
            while (w*i+c < int(S.size())) {
                tmp += S.substr(w*i+(c-1), 1);
                i++;
            }
            if (tmp == T) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
