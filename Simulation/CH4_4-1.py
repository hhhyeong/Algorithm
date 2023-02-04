# L : 왼쪽으로 한칸 이동
# R : 오른쪽으로 한칸 이동
# U : 위로 한칸 이동
# D : 아래로 한칸 이동

# N               // 공간의 크기
# R R R U D D     // A가 이동할 계획서 내용

n = int(input())
x, y = 1, 1
plans = input().split()

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']

for plan in plans:
    # 이동 후 좌표 구하기
    for i in range(len(move_types)):
        