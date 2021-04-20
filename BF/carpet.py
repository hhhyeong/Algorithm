def solution(brown, yellow):
    answer = []
    
    for i in range(int(brown/2)):
        if (i-1) * (int(brown/2) - i - 1) == yellow:
            y = i + 1
            x = int(brown/2) - y + 2
            print(x)
            print(y)
            break
    answer.append(x)
    answer.append(y)
    return answer