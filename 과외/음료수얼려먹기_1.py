n, m = map(int, input().split())

graph = []
for i in range(n):
    graph.append(list(map(int, input())))

# print(graph)

# DFS로 특정한 노드를 방문한 뒤에 연결된 모든 노드들도 방문
def dfs(x,y):
    # 주어진 범위를 벗어나는 경우.
    if x<0 or y<0 or x>=n or y>=y:
        return False
    # 현재 노드를 아직 방문하지 않았다면 방문처리, 4방으로 dfs 재귀호출
    if graph[x][y] == 0:
        # 해당 노드 방문 처리
        graphp[x][y] = 1
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            dfs(nx, ny)



for i in range(m):