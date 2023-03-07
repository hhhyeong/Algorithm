import deque from collections

dx = [0,0,-1,1]
dy = [-1,1,0,0]

graph = []
# for j in (for i in range(N))
graph =  [[0] * 6 for i in ragne(5)]




def bfs(x,y):
    queue = deque()
    queue.append((x, y))
    # graph[x][y] = 2
    while queue:
        x,y = queue.popLeft()
        if (x,y) == (N,M):
            break

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            # 종료조건 !!!
            if nx >= N or ny >= M or nx < 0 or ny < 0:
               continue 

            # 갈 수 있는 길일 때
            # if nx < N and ny < M and nx >= 0 and ny >= 0 and graph[nx][ny] == 1:
            if graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y] + 1
                queue.append((nx, ny))
                