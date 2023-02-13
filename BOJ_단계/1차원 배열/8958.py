N = int(input())

for i in range(N):
    sum = 0
    count = 0
    ox_list = list(input())
    for j in ox_list:
        if j == 'O':
            count += 1
            sum += count
        else:
            count = 0
    print(sum)