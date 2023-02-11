N = int(input())
arr = []
M = 0
n_arr = []
sum_score = 0

arr = input().split()

# arr 의 원소를 int형으로 바꾸기
# for i in range(N):
#     n_arr.append(int(arr[i]))

# 최고 점수 구하기
for i in range(N):
    if (int(arr[i]) >= M):
        M = int(arr[i])

# print(M)

# 새로운 평균 구하기
for i in range(N):
    sum_score += int(arr[i])
    # print(sum_score)

avg = sum_score / M * 100 / N
print(avg)