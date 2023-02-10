# idea)
# 1부터 30까지의 숫자가 순서대로 저장된 리스트 arr을 정의.
# 입력받은 28개의 숫자를 arr에서 remove.
# 최종으로 남은 arr리스트를 set으로 중복 없앤(?) 후, 남은 숫자 출력.

arr = []
for i in range(30):
    arr.append(i+1)

# print(arr)

for i in range(28):
    num = int(input())
    arr.remove(num)

print(arr[0])
print(arr[1])