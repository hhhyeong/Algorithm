w, h, b = map(int, input().split())

# mb = round(w*h*b/8/1024/1024, 2)
# print(mb,'MB')

# 소수점 둘째자리까지 반올림
mb = w*h*b/8/1024/1024
print("%.2f"%mb,"MB")