#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// カスタム比較関数
bool customCompare(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second != b.second) {
        // secondが異なる場合、secondで降順ソート
        return a.second > b.second;
    } else {
        // secondが同じ場合、firstで昇順ソート
        return a.first < b.first;
    }
}

int main() {
    vector<pair<int, int>> vec = {{1, 3}, {2, 3}, {3, 2}, {4, 5}, {5, 1}};

    // カスタム比較関数を使ってソート
    sort(vec.begin(), vec.end(), customCompare);

    // ソート結果の表示
    for (const auto &p : vec) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
