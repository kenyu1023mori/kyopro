#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> ab(N);
    for (int i = 0; i < N; i++) {
        cin >> ab[i].first >> ab[i].second;
    }
    vector<pair<long double, int>> success_rate(N);
    for (int i = 0; i < N; i++) {
        success_rate[i].first =
            -(long double)(ab[i].first) / (ab[i].first + ab[i].second);
        success_rate[i].second = i + 1;
    }
    sort(success_rate.begin(), success_rate.end());

    for (int i = 0; i < N; i++){
        cout << success_rate[i].second << " ";
    }
    return 0;

}
