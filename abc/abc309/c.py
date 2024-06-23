import sys
N, K = map(int, input().split())
pairs = []
for i in range(N):
    tmp1, tmp2 = map(int, input().split())
    pairs.append((tmp1, tmp2))

pairs.sort(key=lambda x: x[0])

sum_b = 0
for i in range(N):
    sum_b += pairs[i][1]

if sum_b <= K:
    print(1)
    sys.exit()

for i in range(N):
    if sum_b <= K:
        print(pairs[i-1][0]+1)
        sys.exit()
    sum_b -= pairs[i][1]

print(pairs[-1][0]+1)
