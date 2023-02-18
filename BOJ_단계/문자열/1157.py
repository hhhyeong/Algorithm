s = (input())
s = s.upper()
s = list(s)
s.sort()
# print(s)
pre_A = 'a'
max_num = 0
max_alpha = []
for i in s:
    count = 1
    if pre_A == i:
        count += 1
    if count > max_num:
        max_num = count
        max_alpha.append(i)
    pre_A = i


print(max_alpha)
if len(max_alpha) >= 2:
    print("?")
else:
    print(max_alpha[0])