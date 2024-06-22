import re, math, bisect, itertools
from collections import deque
import sys

N = int(input())
cnt = 0
for i in range(N):
    s = input()
    if s == 'Takahashi':
        cnt += 1
print(cnt)
