minimum=999999

def dfs(map,k,x,y,num):
    if (x,y)==(N,M):
        minimum=min(minimum,num)
        return
    if map[x][y]==1 or 2:
        return
    elif x<0 or y<0 or x>=M or y>=N:
        return
    else:

        map[x][y]=2

        if k>0:
            dfs(map,k-1,x+1,y-2,num+1)
            dfs(map,k-1,x+x,y-1,num+1)
            dfs(map,k-1,x+2,y+1,num+1)
            dfs(map,k-1,x+1,y+2,num+1)
            dfs(map,k-1,x-1,y+2,num+1)
            dfs(map,k-1,x-2,y+1,num+1)
            dfs(map,k-1,x-2,y-1,num+1)
            dfs(map,k-1,x-1,y-2,num+1)

        dfs(map,k,x+1,y,num+1)
        dfs(map,k,x-1,y,num+1)
        dfs(map,k,x,y+1,num+1)
        dfs(map,k,x,y-1,num+1)

        map[x][y]=0

dfs(map,1,0,0,0)



