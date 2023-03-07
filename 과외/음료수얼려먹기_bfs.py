from collections import deque 

# graph = [0]*5 for in map(int, input())

N, M = map(int, input().split())
dx = [0,0,1,-1]
dy = [1,-1,0,0]
graph = []

for  i in range(N):
    value = input()
    value = list(value)
    # print(value)
    for j in range(M):
        value[j] = int(value[j])
    
    graph.append(value)


def bfs(x, y):
    queue = deque()
    queue.append((x,y))
    while queue:
        x, y = queue.pop()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= N or ny >= M:
                continue
            if graph[nx][ny] == 0:
                queue.append((nx, ny))
                graph[nx][ny] = 1

rslt = 0

for i in range(N):
    for j in range(M):
        if graph[i][j] == 0:
            bfs(i,j)
            rslt += 1
print(rslt)