#include <iostream>
#define MAX 5

using namespace std;

// 2차원 배열을 0 으로 초기화
int matrix[MAX][MAX] = {0,};

int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}