A, B = map(int, input().split())
C = int(input())


plus_H = int((B + C) / 60)
B = (B + C) % 60

A = A + plus_H

if (A >= 24):
    A = A - 24

print(str(A) + " " + str(B))