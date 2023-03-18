h,b,c,s = map(int, input().split())

mb = round(h*b*c*s/8/1024/1024, 1)
print(mb, "MB")
