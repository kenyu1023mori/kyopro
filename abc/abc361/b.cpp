#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

bool f(int l1, int r1, int l2, int r2) {
    return !(r1 <= l2 or r2 <= l1);
}
int main() {
    int x1, y1, z1, x2, y2, z2;
    int x3, y3, z3, x4, y4, z4;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;
    if (f(x1, x2, x3, x4) and f(y1, y2, y3, y4) and f(z1, z2, z3, z4)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
