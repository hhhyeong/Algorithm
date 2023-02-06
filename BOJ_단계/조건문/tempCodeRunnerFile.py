A, B, C = map(int, input().split())
count = 1

if A == B and A != C:
    count = 2
    same = A
elif A == C and A != B:
    count = 2
    same = A
elif B == C and A != C:
    count = 2
    same = B
elif A == B and A == C:
    count = 3


if count == 3:
    print(10000 + A * 1000)
elif count == 2:
    print(1000 + same * 100)
else:
    print(max([A,B,C]) * 100)