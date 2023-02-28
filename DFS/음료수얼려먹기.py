N, M = map(int, input().split())

dx = [-1,0,1,0]
dy = [0,1,0,-1]
# 2차원 리스트의 맵 정보 입력 받기
graph = []


for i in range(N):
    graph.append(list(map(int, input())))

# print(graph)
visited = graph
# print(visited)

# DFS로 특정한 노드를 방문한 뒤에 연결된 모든 노드들도 방문
def dfs(x, y):
    if x <= -1 or x >= N or y <= -1 or y >= M:
        return False
    if graph[x][y] == 0:
        visited[x][y] = 1
        # for i in range(4):
        #     nx = x + dx[i]
        #     ny = y + dx[i]
        #     dfs(nx, ny)
        dfs(x-1, y)
        dfs(x, y+1)
        dfs(x+1, y)
        dfs(x, y-1)
        return True
    return False

result = 0

for i in range(N):
    for j in range(M):
        if visited[i][j] == 0 and graph[i][j] == 0 and dfs(i,j):
            result += 1

print(result)