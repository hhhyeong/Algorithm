# 풀이법 #1
a, b = input().split()
print(int(a)+int(b))

# 풀이법 #2
a, b = map(int, input().split())
print(a+b)



#### 정상
# a, b, d = input().split()
# c = int(a) + int(b) + int(d)
# print(c)

#### Error
# a,b,c = map(int, input())
# print(a+b+c)

#### 정상
# a,b,c = map(int, input().split())
# print(a+b+c)