xa, ya = map(int, input().split())
xb, yb = map(int, input().split())
xc, yc = map(int, input().split())

ABx, ABy = xb-xa, yb-ya
BCx, BCy = xc-xb, yc-yb
CAx, CAy = xa-xc, ya-yc

if ABx*BCx+ABy*BCy == 0 or BCx*CAx+BCy*CAy == 0 or CAx*ABx+CAy*ABy == 0:
    print("Yes")
else:
    print("No")
