n = int(input())
ans = 0
i=1
while True:
    if n <= ans:
        break
    ans+=i
    i+=1
print(ans)