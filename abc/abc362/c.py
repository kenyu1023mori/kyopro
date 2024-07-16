import sys
N = int(input())
L, R = [], []

for i in range(N):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

sum_L = sum(L)
sum_R = sum(R)

if sum_L > 0 or sum_R < 0:
    print("No")
    sys.exit()

X = []
for i in range(N):
    X.append(L[i])

# 現在の和
s = sum_L

for i in range(N):
    if s == 0:
        break
    # 0にするために必要な量と増やせる量のmin
    tmp = min(R[i] - L[i], -s)
    X[i] += tmp
    s += tmp

print("Yes")
print(*X)
