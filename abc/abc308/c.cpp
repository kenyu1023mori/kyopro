#include <bits/stdc++.h>
using namespace std;

// second降順，secondが同値のときfirst昇順
bool customCompare(const pair<int, double> &a, const pair<int, double> &b) {
    if (a.second != b.second) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> ab(N);
    for (int i = 0; i < N; i++) {
        cin >> ab[i].first >> ab[i].second;
    }
    vector<pair<int, double>> success_rate(N);
    for (int i = 0; i < N; i++) {
        success_rate[i].first = i + 1;
        success_rate[i].second = double(ab[i].first) / (ab[i].first + ab[i].second);
    }
    sort(success_rate.begin(), success_rate.end(), customCompare);

    for (int i = 0; i < N; i++){
        cout << success_rate[i].first << " ";
    }
    return 0;

}
