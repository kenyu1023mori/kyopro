import re, math, bisect, itertools
from collections import deque
import sys

N = int(input())
A = list(map(int, input().split()))
ans = 0
for i in range(N*2):
    for j in range(i+1, N*2):
        if A[i] != A[j]:
            continue
        if j-i == 2:
            ans += 1
print(ans)
