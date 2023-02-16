C = int(input())
print("C : " + str(C))

for i in range(C):
    N = int(input())
    print("N : " + str(N))
    sum = 0
    score = []
    score = list(input())
    for j in range(N):
        sum += score[i]
    print("sum : " + str(sum))
    print(sum/N)