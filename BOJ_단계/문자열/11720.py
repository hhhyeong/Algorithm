N = int(input())

str = input()
sum = 0


# sol #1)
for i in str:
    sum += int(i)


# sol #2)
# for i in range(N):
#     sum += int(str[i:i+1])

print(sum)