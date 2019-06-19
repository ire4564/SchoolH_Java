#include <stdio.h>

main(void) {

	int select, x, y;
	int turn = 1;
	char board[3][3] = { {' ',' ',' '},{' ',' ',' '}, {' ',' ',' '} }; //배열 초기화

	printf("LET'S START TIC-TAC-TEO GAME\n");
	printf("\n");
	printf("PLAY WITH FRIEND : 1\n");
	printf("PLAY WITH COMPUTER : 2\n");
	printf("SELECT GAME MODE >>"); //설명 출력
	scanf_s("%d", &select); //모드 입력받기

	if (select == 1) { //1vs1 모드 시작
		printf("x|y[0]|[1]|[2]\n");
		for (int a = 0; a < 3; a++) {
			printf("   ---|---|---\n");
			printf("[%d]   |   |   \n", a);
		}printf("   ---|---|---\n"); //기본 표 틀 출력

		for (int n = 0; n < 5; n++) {
			printf("turn %d\n", turn);
			printf("PLAYER 1's trun (x,y):\n");
			scanf_s("%d", &x); //좌표 입력받기
			scanf_s("%d", &y);
				
			while (board[x][y] != ' ' || (x > 2 || y > 2)) { //해당 보드에 무언가가 들어있거나 입력된 수가 0~2까지 범위에 속하지 않을 경우
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //다시 좌표 입력받기
				scanf_s("%d", &y);
			}
			 //넣으려고 하는 곳에 이미 값이 있다면 
			//값 다시 넣기
			board[x][y] = '0'; //char는 문자를 하나밖에 받지 못하기 때문에 기존 공백이 없어지고 들어감

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) { //입력받은 결과 출력하는 표
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			//player 1 동작 종료


			if ((board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') | //이기는 조건 8가지에 대한 조건들 나열
				(board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0') |
				(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0') |
				(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0') |//기준
				(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0') |
				(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0')) { //player 1이 이길 경우의 8가지 가짓수 
				printf("PLAYER 1 WIN!");
				return;

			}

			printf("turn %d\n", turn);
			printf("PLAYER 2's trun (x,y):\n");
			scanf_s("%d", &x); //좌표 입력받기
			scanf_s("%d", &y);

			while (board[x][y] != ' ' || (x > 2 || y > 2)) { 
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //좌표 입력받기
				scanf_s("%d", &y);
			}
			board[x][y] = 'X';

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			turn++;

		}
		if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') |
			(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') |
			(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') |
			(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') |
			(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') |//기준
			(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') |
			(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') |
			(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')) { //player 2이 이길 경우의 8가지 가짓수 
			printf("PLAYER 2 WIN!");
			return;

		}
		if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' '
			&& board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //만약 배열에 빈자리가 없다면
			//무승부 출력하고 게임 restart하기(일단 끝내기 구현)
			printf("DRAW! GAME OVER!");
			return;
		}
		//player 2 동작 종료
	}
	if (select == 2) { //컴퓨터와 함께모드 시작
		printf("x|y[0]|[1]|[2]\n");
		for (int a = 0; a < 3; a++) {
			printf("   ---|---|---\n");
			printf("[\d]   |   |   \n", a);
		}printf("   ---|---|---\n");

		for (int n = 0; n < 5; n++) {
			printf("turn %d\n", turn);
			printf("PLAYER 1's trun (x,y):\n");
			scanf_s("%d", &x); //좌표 입력받기
			scanf_s("%d", &y);
			//char는 문자를 하나밖에 받지 못하기 때문에 기존 공백이 없어지고 들어감

			while (board[x][y] != ' ' || (x > 2 || y > 2)) { 
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //좌표 입력받기
				scanf_s("%d", &y);
			}
			board[x][y] = '0';
			

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			//player 1 동작 종료


			if ((board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') |
				(board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0') |
				(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0') |
				(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0') |//기준
				(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0') |
				(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0')) { //player 1이 이길 경우의 8가지 가짓수 
				printf("PLAYER 1 WIN!");
				return;

			}

			int x = rand() % 3; //범위 0~2 생성
			int y = rand() % 3;

			printf("COMPUTER TRUN\n");
			while (board[x][y] == '0' || (board[x][y] == 'X')) { //생성한 범위의 값에 이미 값이 들어있을 경우
				//printf("%c\n", board[x][y]);
				x = rand() % 3;
				y = rand() % 3;
			} //넣으려고 하는 곳에 이미 값이 있다면 
			//값 다시 넣기
			board[x][y] = 'X';

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			turn++;

			if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') |
				(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') |
				(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') |
				(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') |
				(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') |//기준
				(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') |
				(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') |
				(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')) { //player 2이 이길 경우의 8가지 가짓수 
				printf("COMPUTER WIN!");
				return;

			}
			if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' '
				&& board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //만약 배열에 빈자리가 없다면
				//무승부 출력하고 게임 restart하기(일단 끝내기 구현)
				printf("DRAW! GAME OVER!");
				return;
			}

		}
		
		//player 2 동작 종료
	}
}
