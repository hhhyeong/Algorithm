/*
	�ʱ�ȭ �Ƚ��Ѽ� ��� fail���µ� �� �װ� ��ã�Ƽ� ���.......�̤�
	�׽�Ʈ���̽� ������ �ʱ�ȭ�� �����սô�. �ݺ��Ǵ� �Ǽ�!
*/

#include<iostream>
#include<cstring>
#define MAX 1000

using namespace std;
int N, M;
int T;
int result;
int arr[MAX][MAX];

int main() {

	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		
		// �ʱ�ȭ.........!!!!!!
		memset(arr, 0, sizeof(arr));
		result = 0;

		cin >> N >> M;	// M:����, N:����

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if ((j % 4 == 0) || (j % 4 == 1)) {
					if ((i % 4 == 0) || (i % 4 == 1)) {
						arr[i][j] = 1;
					}
				}
				if ((j % 4 == 2) || (j % 4 == 3)) {
					if ((i % 4 == 2) || (i % 4 == 3)) {
						arr[i][j] = 1;
					}
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << arr[i][j];
				if (arr[i][j] == 1)
					result++;
			}
			cout << endl;
		}


		cout << "#" << test_case << " " << result << endl;
	}
	return 0;
}