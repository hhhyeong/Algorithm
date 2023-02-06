H, M = map(int, input().split())

if M >= 45:
    M = M - 45
else:
    if H == 0:
        H = 23
        M = 60 - (45 - M)
    else:
        H = H - 1
        M = 60 - (45 - M)

print(str(H) + " " + str(M))