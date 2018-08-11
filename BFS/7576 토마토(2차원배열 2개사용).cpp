#include<stdio.h>
#include<iostream>
#include<queue>
 
using namespace std;
 
int map[1001][1001];
int check[1001][1001];                        // 해당 위치의 토마토가 익을때까지 걸리는 날짜 저장하는 배열. 
                                            // (익은토마토가 아닌 위치 : -1, 익은토마토 위치 : 0)
int m, n;
int dx[5] = { 1, - 1, 0, 0 };
int dy[5] = { 0, 0, 1, -1 };
 
int main() {
    queue<pair<int, int>> q;
    cin >> m >> n;
 
    // 토마토 격자 상자 전체 탐색.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];                // 주어진 토마토 격자 상자의 상태 입력받기.
            check[i][j] = -1;                // check 배열 default 값으로 -1 저장.
            if (map[i][j] == 1) {            // 익은 토마토가 있을 때,
                check[i][j] = 0;            // check 배열에 0 값 입력.
                q.push(make_pair(i, j));    // 익은 토마토가 있는 위치를 queue에 선입선출로 저장.
            }
        }
    }
 
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // [x][y]로부터 상하좌우의 위치에, 익지않은 토마토가 있고,
            // && 아직 방문하지 않았을 때.
            if (map[nx][ny] == 0 && check[nx][ny] == -1) {
                if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    check[nx][ny] = check[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
 
    // 토마토가 최종으로 익는데 걸리는 시간 구하기.
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maxVal < check[i][j])
                maxVal = check[i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 0 && check[i][j] == -1) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << maxVal << endl;
 
    return 0;
}
