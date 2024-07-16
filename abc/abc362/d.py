import heapq

# 参考 : アルゴ式のダイクストラのコード
# https://algo-method.com/tasks/1645CQpP

# 辺情報を表す構造体
class edge:
    def __init__(self, end, leng):
        self.end = end      # 辺の終点
        self.leng = leng    # 辺の重み

INF = 10**15 # 初期化で使う十分大きな数

# main
# 入力を受け取る
N, M = map(int, input().split())
A = list(map(int, input().split())) # 各頂点の重みを入力
G = [[] for _ in range(N)]  # G[i]：頂点 i を始点とする辺情報を格納する
for i in range(M):
    u, v, w = map(int, input().split())
    u -= 1
    v -= 1
    G[u].append(edge(v, w))
    # 無向グラフ
    G[v].append(edge(u, w))

dist = [INF for _ in range(N)]  # dist[i]：頂点 0 から頂点 i への暫定的な経路長
# 頂点の重み考慮
dist[0] = A[0]
done = [False for _ in range(N)]    # done[i]：頂点 i の最短距離が確定しているか

hq = [] # (仮の最短距離、頂点番号) を管理するヒープ
heapq.heapify(hq)

# ヒープに最初の時点における情報を入れておく
heapq.heappush(hq, (dist[0], 0))

while len(hq) > 0:
    # ヒープの先頭要素を取り出す (v は頂点番号、d は 0 → v の仮の最短距離)
    d, v = heapq.heappop(hq)
    # 頂点 v の最短距離がすでに確定しているなら、何もしない
    if done[v]: continue

    # 頂点 v を始点とする辺 e について、更新を行う
    for e in G[v]:
        if dist[e.end] > dist[v] + e.leng + A[e.end]:
            # 距離の更新がある場合には、ヒープに更新後の情報を入れる
            dist[e.end] = dist[v] + e.leng + A[e.end]
            heapq.heappush(hq, (dist[e.end], e.end))
    # 頂点 v の最短距離を確定させる
    done[v] = True

# 答えを出力する
for i in range(1, N):
    print(dist[i], end=" ")
