data = input()
result = 0

for i in range(0, len(data)):
    num = int(data[i])
    if ((num == 0) or (num == 1) or (result == 0)):
        result += num;
    else:
        result *= num;

print(result)