S = list(input())

# print(S)
# print(len(S))

alpha = []

# 틀린문법!!
# alpha[0] = -1

# 크기가 26인 alpha 리스트 -1 초기화
for i in range(26):
    alpha.append(-1)


# baekjoon -> 숫자
# index와 값을 함께 for문으로 돌아야함.
for i in range(0, len(S)):
    if (alpha[ord(S[i]) - ord('a')] == -1):
        alpha[ord(S[i]) - ord('a')] = i

print(alpha)