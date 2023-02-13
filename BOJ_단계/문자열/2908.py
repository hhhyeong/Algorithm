A, B = map(int, input().split())

list_A = []
list_B = []

#################### A ###################

# str -> list
for i in str(A):
    list_A.append(i)

# list reverse
list_A.reverse()

# list to str
str_A = ''.join(str(s) for s in list_A)
num_A = int(str_A)


#################### B ###################

for j in str(B):
    list_B.append(j)

list_B.reverse()

str_B = ''.join(str(s) for s in list_B)
num_B = int(str_B)

##########################################

if num_A > num_B:
    print(num_A)
else:
    print(num_B)