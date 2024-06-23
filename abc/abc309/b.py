N = int(input())
A = [input() for _ in range(N)]


B = [([0]*N) for _ in range(N)]

for i in range(1, N-1):
    for j in range(1, N-1):
        B[i][j] = A[i][j]


for i in range(1, N):
    B[0][i] = A[0][i-1]
    B[i][N-1] = A[i-1][N-1]

for i in range(N-2, -1, -1):
    B[N-1][i] = A[N-1][i+1]
    B[i][0] = A[i+1][0]

for b in B:
    print(*b, sep='')
