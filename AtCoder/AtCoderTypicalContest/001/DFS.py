import sys

sys.setrecursionlimit(1000000)

dx[4] = [1, 0, -1, 0]
dy[4] = [0, 1, 0, -1]

H, W = map(int,input().split())

M = [input() for i in range(H)
     ]
flag = [[False for i in range(W)] for i in range(H)]

def dfs(x, y):
    if x < 0 or W <= x or y < 0 or H <= y or M[y][x]=='#':
       return

    if flag[y][x]:
       return

    flag[y][x] = True

    for i in range(4):
        dfs(x+dx[i], y+dy[i])

for i in range(H):
    for j in range(W):
        if M[i][j]=='s':
            dfs(j,i)
        elif M[i][j] == 'g':
            gx, gy = j, i

if flag[gy][gx]:
    print("Yes")
else:
    print("No")

