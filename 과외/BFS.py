q=deque()
q.append((0,0))

map[0][0]=0

while q:

    (x,y)=q.popleft()
    
    if (x,y) == (2,2):
        return map[x][y]

    new_x=x+1
    new_y=y
    if (new_x>=0 and new_y>=0 and new_x<M and new_y<N) and map[new_y][new_x]==1:
        q.append((new_x,new_y))
        map[new_x][new_y]=map[x][y]+1
        
    new_x=x-1
    new_y=y    
    if (new_x>=0 and new_y>=0 and new_x<M and new_y<N) and map[new_y][new_x]==1:
        q.append((new_x,new_y))
        map[new_x][new_y]=map[x][y]+1
    
    new_x=x
    new_y=y+1
    if (new_x>=0 and new_y>=0 and new_x<M and new_y<N) and map[new_y][new_x]==1:
        q.append((new_x,new_y))
        map[new_x][new_y]=map[x][y]+1
    
    new_x=x
    new_y=y-1
    if (new_x>=0 and new_y>=0 and new_x<M and new_y<N) and map[new_y][new_x]==1:
        q.append((new_x,new_y))
        map[new_x][new_y]=map[x][y]+1