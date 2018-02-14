/*
- 유형 : 종료조건을 통해 가지치기를 구현한 DFS
- 아이디어:
25개의 칸 중 7칸을 무작위로 선택하고,					=> casdDFS 함수.
조건에 맞는지 검사하는 작업
조건1) 임도연파(Y)가 4명 이하.						=> casdDFS 함수의 종료조건.
조건2) 선택된 7개에 대하여 칸이 모두 이웃.			=> caseDFS 함수 안에서 checkCon 함수 호출.
을 거쳐 조건을 만족시킬 경우, ans 카운트를 증가시키는 알고리즘을 구현하여
조건을 만족하는 경우의 수를 출력한다.
- 핵심 :
caseDFS에서,
다음 선택을 하기 위한 재귀호출.(Combination 구현)
1. 지금 칸을 선택하는 경우.			caseDFS(idx + 1, cnt + 1);
2. 지금 칸을 선택하지 않는 경우.	caseDFS(idx + 1, cnt);			//인덱스 이동만 하고, 개수를 세지 않기위해 cnt값 그대로 유지.

- 유사문제 :	14500 테트로미노(2중배열에서 이웃한 칸 중 뻐큐모양 탐색하기.)
6603 로또(Combination 구현하는 재귀호출.)
- 새로 알게된 꿀팁 :
1) 전역배열 princess[7] 선언 - 전역배열은 배열 크기만 지정해주면, 자동으로 0으로 초기화 됨.
*/
#include<iostream>

using namespace std;


// 상하좌우 탐색하기 위한 델타 배열.
const int dx[4] = { 0, 1, 0, -1 };
const int dy[4] = { 1, 0, -1, 0 };

// 입력받을 교실의 상태.
char classRoom[5][5];

// 출력값. 칠공주 결성 가능한 경우의 수.
int ans;

// 교실 25칸 중에 무작위로 선택된 7개 칸의 좌표(인덱스값) 저장.
int princess[7];

// 교실 25칸 중 선택된 위치를 true로 체크표시.
bool check[5][5];

// check배열에서 표시된 칸이 몇개가 이어졌는지 개수 세는 변수.
int checkCnt;

// 7칸이 모두 이어졌으면 true로 표시.
bool connection;




/*
checkCon함수 : 매개변수로 들어오는 좌표로부터 이웃한(상하좌우) 위치에 check배열에 true표시된 7개의 칸이 존재하는지(이어졌는지) 검사하는 함수.
*/
/*	이어진 칸의 개수(checkCnt)가 7이면, 7개의 칸이 모두 이어진 것이므로
connection 에 true를 저장.*/
void checkCon(int x, int y) {

	// 해당 좌표의 칸을 세기.
	checkCnt++;

	// 해당 좌표에 방문 표시.
	check[x][y] = false;

	/* 재귀 종료조건.*/
	// 이웃한 칸의 개수가 7일 때
	if (checkCnt == 7) {
		// 연결을 true표시하고 리턴.
		connection = true;
		return;
	}

	/* x, y좌표로부터 상하좌우 위치 탐색하여 */
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		// 탐색하는 좌표가 classRoom 의 범위 바깥으로 나가면, continue 실행.
		if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5)
			continue;

		// 상하좌우 위치에 선택된 칸이 위치하면,
		if (check[nx][ny] == true)
			// 그 칸에 대해 상하좌우 탐색하기위해 checkCon함수 재귀호출.
			checkCon(nx, ny);
	}
}





/*
caseDFS함수 : 25칸 중 무작위로 7칸 선택하는 함수. 총 25 C 7 개의 단일노드 생성되는데, 완전탐색하기 전에 종료조건을 2가지 추가하여 가지치기 수행하는 함수.
*/
/*	종료조건
1) Y >= 4		: 임도연파가 4명 이상일 경우, return.
2) idx == 26	: 7칸을 선택하는 인덱스가 교실 범위를 벗어날 경우, return.

if (cnt == 7)	: 7칸을 모두 선택 완료했을 경우,
그 7개가 서로 이어졌는지(상하좌우에 이웃하여 위치하는지) 조사하기 위해 checkCon(선택된 칸의 좌표 x, y) 를 수행.
*/
void caseDFS(int idx, int cnt, int Y) {

	// 종료조건 1)
	if (Y >= 4)
		return;

	// 종료조건 2)
	if (idx == 26)
		return;


	// 칠공주 7명을 선택 완료했을 경우,
	if (cnt == 7) {

		// check 배열 0으로 초기화.
		memset(check, 0, sizeof(check));
		// 7개 모두 연결되었다는 표시 초기화.
		connection = false;
		// 연결된 칸의 개수를 0으로 초기화.
		checkCnt = 0;

		// 선택된 7개의 칸에 해당하는 위치(princess배열값)를 모두 check배열에 true로 표시.
		for (int i = 0; i < 7; i++)
			check[princess[i] / 5][princess[i] % 5] = true;

		// 선택된 제일 첫번째 위치부터(1호 공주부터 탐색.) 7개의 칸이 이어졌는지 검사하기 위해 checkCon함수 호출.
		checkCon(princess[0] / 5, princess[0] % 5);


		// 7개 모두 이어진것으로 확인되면,
		if (connection == true)
			// 답++;
			ans++;

		return;
	}


	// 공주로 선택된 칸의 위치의 좌표값(idx 값)을 princess 배열에 저장. 
	// ex. [0] : 1호 공주의 위치저장, [1] : 2호 공주의 위치 저장, .... [6] : 7호 공주의 위치 저장.
	princess[cnt] = idx;


	/*
	다음 선택을 하기 위한 재귀호출.
	1. 지금 칸을 선택하는 경우.
	-1) 지금 칸이 'Y'일 경우. Y++;
	-2) 지금 칸이 'Y'가 아닐경우.
	2. 지금 칸을 선택하지 않는 경우.
	*/

	// 1. 현재 칸을 선택하는 경우
	//	-1) 현재 위치에 해당하는 값이 Y인 경우, (임도연파일 경우)
	//		다음 인덱스의 칸으로 이동(idx + 1), 선택한 공주 카운트 증가(cnt + 1), Y값 증가(Y + 1)
	if (classRoom[idx / 5][idx % 5] == 'Y')
		caseDFS(idx + 1, cnt + 1, Y + 1);

	//	-2) Y가 아닐 경우,
	//		다음 인덱스의 칸으로 이동(idx + 1), 선택한 공주 카운트 증가(cnt + 1), Y값 그대로(Y)
	else
		caseDFS(idx + 1, cnt + 1, Y);

	// 2. 현재 칸을 선택하지 않는 경우.
	//	  다음 인덱스의 칸으로 이동, 선택하지 않았으므로 카운트 그대로, Y값 그대로.
	caseDFS(idx + 1, cnt, Y);
}




int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> classRoom[i][j];
		}
	}
	caseDFS(0, 0, 0);

	cout << ans << endl;

	return 0;
}