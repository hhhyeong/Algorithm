# 라스트(배열) 선언
arr = []

#################################### 엔터로 나누어져있을 때 리스트(배열) 입력받기
# arr = input().split()
for i in range(9):
    ####################### C++의 배열과 헷갈림 => arr 리스트의 크기는 0이기때문에,
    #  arr[1:9]를 호출하면 index out of error ##########################
    # arr[i] = int(input())
    arr.append(int(input()))

max_n = 0

for i in range(9):
    if int(arr[i]) >= max_n:
        max_n = arr[i]
        max_i = i

print(max_n)
print(max_i+1)