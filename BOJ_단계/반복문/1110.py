N = int(input())
ori = N
count = 0

while(True):
    N = int(N%10) * 10 + int((int(N/10) + int(N%10)) % 10)
    # print(str(count) + " : " + str(N))
    count = count+1

    if (N == ori):
        print(count)
        break;