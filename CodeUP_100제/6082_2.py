n = int(input())

for i in range(1,n+1):
    # 일의자리에 3,6,9가 포함되어있는 경우
    if (i<10) and i % 10 == 3:
        print('X',end=' ')
    # 10의자리에 3이 포함되어있는 경우
    elif i % 10 == 3 and (i / 10 != 3):
        print('X',end=' ')
    elif i % 10 == 3 and (i / 10 == 3):
        print('XX',end=' ')
    # print(" ")
    else:
        print(i, end=" ")