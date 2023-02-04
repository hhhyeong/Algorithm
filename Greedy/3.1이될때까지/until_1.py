# n, k 를 공백을 기준으로 구분하여 입력 받기
n, k = map(int, input().split())

result = 0

while True:
    target = (int)(n // k) * k
    result += (n - target)
    n = target

    if (n < k):
        break
    result += 1
    n /= k

result += (n-1)
print((int)(result))