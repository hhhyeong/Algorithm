max_n = -1000000;
min_n = 1000000;

N = int(input())
arr = input().split()

for i in range(N):
    if int(arr[i]) <= min_n:
        min_n = int(arr[i])
    if int(arr[i]) >= max_n:
        max_n = int(arr[i])

print(str(min_n) + " " + str(max_n))