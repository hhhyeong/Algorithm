



def dfs(x,y,t):
    if x < 0 or y < 0 or x >= N or y >= M:
        return
    # 갔던 점이거나 0일 경우 - end 조건
    if map[x][y] == 0 or map[x][y] == t:
        return
    
    if map[x][y] == 1:
        map[x][y] = t
        dfs(x+1, y, t)
        dfs(x-1, y, t)
        dfs(x, y+1, t)
        dfs(x, y-1, t)


count = 2

for i in range(N):
    for j in range(M):
        if map[i][j] == 1:
            dfs(i,j,count)
            count+=1


# 최단거리의 다리를 찾는게 목적 !!! 섬과 섬을 잇는 다리를 만드는게 
# 다른 섬이 나왔을 경우,
def bfs(x,y,t):
    end=False
    queue = deque()
    queue.append((x,y,0))
    while queue:
        x,y,length = queue.pop()
        
        

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if map[nx][ny] == 0:
                queue.append((nx,ny,length+1))
                map[nx][ny] = -1

            elif map[nx][ny] !=t:
                end=True
                break

        if end:
            break

    return length


for new_count in range(2,count):

    for i in range(N):
        for j in range(M):
            if map[i][j]==new_count:
                bfs(i,j,new_count)
