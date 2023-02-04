# 킹 1,  퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8

# 검정색 피스
# 흰색 피스

# 1 1 2 2 2 8
# 2 1 2 1 2 1

# -1 0 0 1 0 7

input_arr = input().split()

arr = [1,1,2,2,2,8]
ans = ""
for i in range(len(arr)):
    ans = ans + str(int(arr[i]) - int(input_arr[i])) + ' '

print(ans)