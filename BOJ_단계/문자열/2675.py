T = int(input())

for k in range(T):
    R, S = input().split()
    for i in S:
        print(i*int(R), end='')
    print()