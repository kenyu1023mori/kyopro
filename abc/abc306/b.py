A = list(map(int, input().split()))
A.reverse()
s = ""
for i in A:
    s += str(i)

print(int(s, 2))
