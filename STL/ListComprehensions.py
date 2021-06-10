if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    arr_total = []
    arr = []
    cnt = 0
    
    for i in range(0, x+1):
        for j in range(0, y+1):
            for k in range(0, z+1):
                if n != (i+j+k):
                    arr.append([i,j,k])
                    
    print(arr)
                    
    # print(arr_total)
# print(arr)
