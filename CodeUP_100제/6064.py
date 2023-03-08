a,b,c = map(int, input().split())

# ????
# if(a if(a<=b) else b) <= (a if(a<=c) else c)

# 정답 #1)
# x = a if(a<=b) else b
# y = a if(a<=c) else c
# print(x if(x<=y) else y)

# 정답 #2)
print((a if(a<=b) else b) if ((a if(a<=b) else b) <= c) else c)