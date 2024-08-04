import re, math, bisect, itertools
from collections import deque
import sys
# ランダムアクセスもO(1)でできるdeque
class Deque:
    def __init__(self, src_arr=[], max_size=300000):
        self.N = max(max_size, len(src_arr)) + 1
        self.buf = list(src_arr) + [None] * (self.N - len(src_arr))
        self.head = 0
        self.tail = len(src_arr)
    def __index(self, i):
        l = len(self)
        if not -l <= i < l: raise IndexError('index out of range: ' + str(i))
        if i < 0:
            i += l
        return (self.head + i) % self.N
    def __extend(self):
        ex = self.N - 1
        self.buf[self.tail+1 : self.tail+1] = [None] * ex
        self.N = len(self.buf)
        if self.head > 0:
            self.head += ex
    def is_full(self):
        return len(self) >= self.N - 1
    def is_empty(self):
        return len(self) == 0
    def append(self, x):
        if self.is_full(): self.__extend()
        self.buf[self.tail] = x
        self.tail += 1
        self.tail %= self.N
    def appendleft(self, x):
        if self.is_full(): self.__extend()
        self.buf[(self.head - 1) % self.N] = x
        self.head -= 1
        self.head %= self.N
    def pop(self):
        if self.is_empty(): raise IndexError('pop() when buffer is empty')
        ret = self.buf[(self.tail - 1) % self.N]
        self.tail -= 1
        self.tail %= self.N
        return ret
    def popleft(self):
        if self.is_empty(): raise IndexError('popleft() when buffer is empty')
        ret = self.buf[self.head]
        self.head += 1
        self.head %= self.N
        return ret
    def __len__(self):
        return (self.tail - self.head) % self.N
    def __getitem__(self, key):
        return self.buf[self.__index(key)]
    def __setitem__(self, key, value):
        self.buf[self.__index(key)] = value
    def __str__(self):
        return 'Deque({0})'.format(str(list(self)))

def isPrime(num):
    if num == 1:
        return False
    for i in range(2, int((num+1)**(1/2))+1):
        if num % i == 0:
            return False
    return True






N = int(input())
S = input()
dp = [[0]*3 for _ in range(N+1)]

# 勝つ手と負ける手
win = {'R': 1, 'P': 2, 'S': 0}
lose = {'R': 2, 'P': 0, 'S': 1}
for i in range(1, N + 1):
    for j in range(3):
        # 手jを出した場合
        for k in range(3):
            # 前の手と同じ場合
            if j == k:
                continue
            # 負ける場合
            if j == lose[S[i-1]]:
                continue
            dp[i][j] = max(dp[i][j], dp[i-1][k])

        if j == win[S[i-1]]:
            dp[i][j] += 1
print(max(dp[N][0], dp[N][1], dp[N][2]))
