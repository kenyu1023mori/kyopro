#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;


int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> key(M, vector<int>(N, 0));
    vector<string> R(M);
    for (int i = 0; i < M; i++) {
        int c;
        cin >> c;
        for (int j = 0; j < c; j++) {
            int a;
            cin >> a;
            key[i][a-1] = 1;
        }
        cin >> R[i];
    }

    int res = 0;
    // bit全探索
    for (int i = 0; i < (1<<N); i++) {
        // 0は偽物，1は本物と仮定．全通り試す (true false)
        // その仮定が正しければans+1
        vector<int> tf(N);
        // jは各bitに対して1か0か調べる
        // 仮定したパターンを生成 000, 001, 010, ...みたいな
        for (int j = 0; j < N; j++) {
            if (i & (1<<j)) tf[j] = 1;
            else tf[j] = 0;
        }

        bool jud = true;
        // M通りのoxの例で調べる
        for (int j = 0; j < M; j++) {
            int ck = 0;
            // j個目の例で鍵が使われていて，仮定でもそれを使うとしてるならck++ (count k?)
            for (int p = 0; p < N; p++) {
                if (key[j][p] == 1 && tf[p] == 1) ck++;
            }
            // 正しいと仮定した鍵をK本以上使ってもxなら仮定が違ってる
            if (ck >= K && R[j] == "x") jud = false;
            // 鍵が足りてなくてoでも仮定が違っている
            if (ck < K && R[j] == "o") jud = false;
        }
        if (jud) res++;

    }
    cout << res << endl;
    return 0;
}
