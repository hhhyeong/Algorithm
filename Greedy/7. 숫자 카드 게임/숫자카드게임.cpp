#include<iostream>
#define MAX 5

using namespace std;

int arr[MAX][MAX] = {0,};

int main() {
    int n, m;
    int result;             // 0으로 초기화
    int result2;
    int min_value = 10001;
    int x;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result = min(min_value, arr[i][j]);
        }
        result2 = max(result, 0);
    }
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> x;
    //         min_value = min(min_value, x);
    //     }
    //     cout << result << endl;
    //     result = max(result, min_value);
    // }
    
    // cout << result << '\n';


    // 1) i = 0
    // min(arr[0][0], arr[0][1], arr[0][2])
    // 2) i = 1
    // min(arr[1][0], arr[1][1], arr[1][2])
    // 3) i = 2
    // min(arr[2][0], arr[2][1], arr[2][2])
    
    // min(arr[0][0], arr[0][0], arr[0][0]);
}