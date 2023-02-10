N, X = map(int, input().split())

A = input().split()

for i in range(N):
    if X > int(A[i]):
        print(str(A[i]) + " ", end='')