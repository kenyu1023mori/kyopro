import sys
N, K = map(int, input().split())
pairs = []
for i in range(N):
    tmp1, tmp2 = map(int, input().split())
    pairs.append((tmp1, tmp2))

pairs.sort(key=lambda x: x[0])

# 逆から累積和
acc = [0]
j = 0
for i in range(N-1, -1, -1):
    acc.append(acc[j]+pairs[i][1])
    j += 1

acc.reverse()

if acc[0] <= K:
    print(1)
    sys.exit()

for i in range(N):
    if acc[i] <= K:
        print(pairs[i-1][0]+1)
        break
