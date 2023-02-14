N = int(input())

arr = []
for i in range(5):
    num = int(input())
    arr.append(num)


arr.sort()
# print(arr)
for i in range(len(arr)):
    print(arr[i])