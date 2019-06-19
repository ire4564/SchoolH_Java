#include <stdio.h>

main(void) {

	int select, x, y;
	int turn = 1;
	char board[3][3] = { {' ',' ',' '},{' ',' ',' '}, {' ',' ',' '} }; //�迭 �ʱ�ȭ

	printf("LET'S START TIC-TAC-TEO GAME\n");
	printf("\n");
	printf("PLAY WITH FRIEND : 1\n");
	printf("PLAY WITH COMPUTER : 2\n");
	printf("SELECT GAME MODE >>"); //���� ���
	scanf_s("%d", &select); //��� �Է¹ޱ�

	if (select == 1) { //1vs1 ��� ����
		printf("x|y[0]|[1]|[2]\n");
		for (int a = 0; a < 3; a++) {
			printf("   ---|---|---\n");
			printf("[%d]   |   |   \n", a);
		}printf("   ---|---|---\n"); //�⺻ ǥ Ʋ ���

		for (int n = 0; n < 5; n++) {
			printf("turn %d\n", turn);
			printf("PLAYER 1's trun (x,y):\n");
			scanf_s("%d", &x); //��ǥ �Է¹ޱ�
			scanf_s("%d", &y);
				
			while (board[x][y] != ' ' || (x > 2 || y > 2)) { //�ش� ���忡 ���𰡰� ����ְų� �Էµ� ���� 0~2���� ������ ������ ���� ���
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //�ٽ� ��ǥ �Է¹ޱ�
				scanf_s("%d", &y);
			}
			 //�������� �ϴ� ���� �̹� ���� �ִٸ� 
			//�� �ٽ� �ֱ�
			board[x][y] = '0'; //char�� ���ڸ� �ϳ��ۿ� ���� ���ϱ� ������ ���� ������ �������� ��

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) { //�Է¹��� ��� ����ϴ� ǥ
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			//player 1 ���� ����


			if ((board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') | //�̱�� ���� 8������ ���� ���ǵ� ����
				(board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0') |
				(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0') |
				(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0') |//����
				(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0') |
				(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0')) { //player 1�� �̱� ����� 8���� ������ 
				printf("PLAYER 1 WIN!");
				return;

			}

			printf("turn %d\n", turn);
			printf("PLAYER 2's trun (x,y):\n");
			scanf_s("%d", &x); //��ǥ �Է¹ޱ�
			scanf_s("%d", &y);

			while (board[x][y] != ' ' || (x > 2 || y > 2)) { 
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //��ǥ �Է¹ޱ�
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
			(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') |//����
			(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') |
			(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') |
			(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')) { //player 2�� �̱� ����� 8���� ������ 
			printf("PLAYER 2 WIN!");
			return;

		}
		if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' '
			&& board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //���� �迭�� ���ڸ��� ���ٸ�
			//���º� ����ϰ� ���� restart�ϱ�(�ϴ� ������ ����)
			printf("DRAW! GAME OVER!");
			return;
		}
		//player 2 ���� ����
	}
	if (select == 2) { //��ǻ�Ϳ� �Բ���� ����
		printf("x|y[0]|[1]|[2]\n");
		for (int a = 0; a < 3; a++) {
			printf("   ---|---|---\n");
			printf("[\d]   |   |   \n", a);
		}printf("   ---|---|---\n");

		for (int n = 0; n < 5; n++) {
			printf("turn %d\n", turn);
			printf("PLAYER 1's trun (x,y):\n");
			scanf_s("%d", &x); //��ǥ �Է¹ޱ�
			scanf_s("%d", &y);
			//char�� ���ڸ� �ϳ��ۿ� ���� ���ϱ� ������ ���� ������ �������� ��

			while (board[x][y] != ' ' || (x > 2 || y > 2)) { 
				printf("WRONG POSITION! \n");
				printf("PLAYER 1's trun (x,y):\n");
				scanf_s("%d", &x); //��ǥ �Է¹ޱ�
				scanf_s("%d", &y);
			}
			board[x][y] = '0';
			

			printf("x|y[0]|[1]|[2]\n");
			for (int a = 0; a < 3; a++) {
				printf("   ---|---|---\n");
				printf("[%d] %c | %c | %c \n", a, board[a][0], board[a][1], board[a][2]);

			}printf("   ---|---|---\n");

			//player 1 ���� ����


			if ((board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0') |
				(board[0][2] == '0' && board[1][1] == '0' && board[2][0] == '0') |
				(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0') |
				(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0') |//����
				(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0') |
				(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0') |
				(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0')) { //player 1�� �̱� ����� 8���� ������ 
				printf("PLAYER 1 WIN!");
				return;

			}

			int x = rand() % 3; //���� 0~2 ����
			int y = rand() % 3;

			printf("COMPUTER TRUN\n");
			while (board[x][y] == '0' || (board[x][y] == 'X')) { //������ ������ ���� �̹� ���� ������� ���
				//printf("%c\n", board[x][y]);
				x = rand() % 3;
				y = rand() % 3;
			} //�������� �ϴ� ���� �̹� ���� �ִٸ� 
			//�� �ٽ� �ֱ�
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
				(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') |//����
				(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') |
				(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') |
				(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')) { //player 2�� �̱� ����� 8���� ������ 
				printf("COMPUTER WIN!");
				return;

			}
			if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' '
				&& board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ') { //���� �迭�� ���ڸ��� ���ٸ�
				//���º� ����ϰ� ���� restart�ϱ�(�ϴ� ������ ����)
				printf("DRAW! GAME OVER!");
				return;
			}

		}
		
		//player 2 ���� ����
	}
}
