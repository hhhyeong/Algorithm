n = int(input())
i = 0

while n > i:
    i+=1
    if i % 3 == 0:
        continue
    print(i, end=' ')
