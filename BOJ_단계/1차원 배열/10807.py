N = int(input())
arr = input().split()
v = int(input())
count = 0

# range(N)과 동일?
for i in range(N):
    if v == int(arr[i]):
        count+=1

print(count)