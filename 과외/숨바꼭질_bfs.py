from collections import deque

N, K = map(int, input())


# queue에다가 현재 시간도 함께 넣기
def bfs(x, time):
    queue = deque()
    queue.append((x, 0))
    while queue:
        x, time = queue.pop()

        if x == K:
            break

        else:
            queue.append((2*x, time+1))
            queue.append((x-1, time+1))
            queue.append((x+1, time+1))
            
    return time