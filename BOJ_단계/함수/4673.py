def sol(N):
    cnt = 1
    sum = N
    while True:
        rmn = n % (cnt * 10) / cnt
        if rmn == 0:
            break
        sum += rmn
        cnt *= 10
    # print(sum)
    print(arr.remove(sum))

# 1에서 10000까지 값을 갖는 배열 arr
for i in range(1, 10001):
    arr.append(i)

for i in range(1, 10001):
    arr.remove(sol(N))

print(arr)