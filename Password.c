#include <stdio.h>

void checkPassword(char *word) {// �н����带 �޾Ƽ� ��� ���

	int num = 0; //����
	int s_alpha = 0; //�ҹ���
	int b_alpha = 0; //�빮��
	int speical = 0; //Ư������ count
	int size = 0; //��ü ���� count

	while (*word != '\0'){ //���ڰ� ������ �ƴҶ����� ����


		if (isupper(*word)) { //�빮���� ���
			b_alpha++;
		}
		else if (islower(*word)) { //�ҹ����� ���
			s_alpha++;
		}
		else if (isdigit(*word)) { //������ ���
			num++;
		}
		else if ((*word == '@') || (*word == '$') || (*word == '!') || (*word == '#')) {
			//Ư�� ������ ���
			speical++;
		} 

		size++;//��ü ���� ���� ����
		++word; //������ �̵� ���Ѽ� ���� ���ڷ� �Ѿ��
	
		

		if ((*word == *(word-1)+1) || (*(word-1) == *word-1)) { //�Էµ� ���ڰ� ���ĺ��̰�, ���ӵ� ���ĺ��̸�
			printf("���ӵ� ���ڿ��� ����� �� �����ϴ�. \n");
		}


	} //�ݺ������� count�� �� �Ǻ�

	if (size < 10) { //���ڿ��� 10�ڸ��� ���� ���� ���
		printf("���ڿ��� 10�ڸ� �̻� �Է� �� �ּ���!\n");
	}
	if ((num == 0) || (s_alpha == 0) || (b_alpha == 0)) {
		printf("����, �ҹ���, �빮�ڸ� 1�� �̻� ��� �������ּ���.\n");
	}
	if (speical == 0) {
		printf("Ư�����ڸ� ������ �ּ���.\n");
	}



}



int main(void) {

	char password[30] = { 0, };

	printf("����Ͻ� �н����带 �Է��� �ּ���. : ");
	fgets(password, 30, stdin);

	checkPassword(password);
	


}

