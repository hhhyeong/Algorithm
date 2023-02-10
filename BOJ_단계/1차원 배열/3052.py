# idea)
# sol #1) 입력받은 10개 숫자를 42로 나눈 나머지를 arr_rmn리스트에 저장함.
#         arr리스트를 set 자료구조로 변환하여, 중복 없애기.
#         중복을 없앤 자료구조의 원소 개수 구하기.
# sol #2) 입력받은 10개 숫자를 42로 나눈 나머지에 해당하는 값을 index로 갖는 배열(arr_index)의 원소값을 +1
#         arr_index의 원소가 0이 아닌 경우 count++


# sol #1)
arr_rmn = []

for i in range(10):
    n = int(input())
    rmn = n % 42
    arr_rmn.append(rmn)

print(len(set(arr_rmn)))

#sol #2)
# arr_rmn = [0]*42
# count = 0
# # print(arr_rmn)
# for i in range(10):
#     n = int(input())
#     rmn = n % 42
#     # print(arr_rmn[rmn])
#     arr_rmn[rmn] += 1
# # print("hello")

# for i in range(42):
#     if arr_rmn[i] != 0:
#         count += 1
# print(count)