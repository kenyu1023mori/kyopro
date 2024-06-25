#include <bits/stdc++.h>

using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

bool is_palindrome(string T) {
string T2 = T;
    reverse(T2.begin(), T2.end());
    return T == T2;
}

int main() {
    int N;
    cin >> N;
    vector<string> S;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        S.push_back(s);
    }
    bool flag = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            string T = S[i]+S[j];
            if (is_palindrome(T)) {
                flag = true;
                break;
            }
        }
        if (flag) break;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
