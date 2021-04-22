from itertools import permutations

numbers = "123"
num_arr = list(numbers)
per_num = []

# Permutation 결과 per_num 배열에 저장
for i in range(1, len(numbers)+1):
    for j in range(len(list(permutations(num_arr, i)))):
        str_num = ''.join(list(list(permutations(num_arr, i))[j]))
        
        per_num.append(int(str_num))
        per_num = list(set(per_num))

# print(per_num)

# 소수 판별하기
# for i in range(len(per_num)):
#     for j in range(2, int(per_num[i] ** 0.5) + 1):
#         print(j)
#         if per_num[i] % j == 0:
#             break
#         if j == int(per_num[i] ** 0.5):
#             print(per_num[i])

prime_arr = []

def isPrime(x):
    if x == 1:
        return False
    for j in range(2, int(per_num[i] ** 0.5) + 1):
        if per_num[i] % j == 0:
            return False
    return True


for i in range(len(per_num)):
    if isPrime(per_num[i]) == True:
        prime_arr.append(per_num[i])
        print(per_num[i])

print(len(prime_arr))