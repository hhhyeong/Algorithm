# N, M = map(int, input().split())
N = int(input())
M = int(input())
rslt = N * M

while(M != 0):
    remain = M % 10
    M = M / 10
    print(N * remain)


print(rslt)