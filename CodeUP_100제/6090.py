a, m, d, n = map(int,input().split())

i=1

while i<n:
    a = a * m + d
    i+=1

print(a)