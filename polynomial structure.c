#include <stdio.h>

struct polynomial {
	int coeff; //���
	int exp; //����
};





void main() {

	struct polynomial pn[5]; //�ټ��� �Է��� ����
	int e_num = 0;
	int x = 0;
	int result = 0;
	int final[5];

	for (int i = 0; i < 5; i++) {
		printf("%d��° ����� �Է����ּ��� : ", i + 1);
		scanf_s("%d", &pn[i].coeff);
		printf("%d��° ������ �Է����ּ��� : ", i + 1);
		scanf_s("%d", &pn[i].exp);
	}

	printf("������ ���� ������ �����ϴ�.\n");
	for (int i = 0; i < 4; i++) {
		printf("%dx^%d + ", pn[i].coeff, pn[i].exp);
		e_num++;
	}
	printf("%dx^%d", pn[4].coeff, pn[4].exp);

	printf("���� �Ŀ����� %d���� ������ ���Ǿ����ϴ�.\n���� ����� x ���� �Է��� �ּ���. :", e_num);
	scanf_s("%d", &x);

	for (int i = 0; i < 5; i++) { //����ü �迭�� ���� ����
		result = pn[i].coeff; //ù��° ����� result ������ �����ϰ�
		for (int i = 0; i < pn[i].exp; i++) { //���� ��ŭ �ݺ�
			x *= x; // x�� ��������ŭ ����
		}
		result = result * x; 
		final[i] = result;
	}

	for (int i = 0; i < 5; i++) {
		result += final[i];
	}
	
	printf("���� ��� ����� %d�Դϴ�.", result);

}

void cal(int x) {

	//x�� ���� ������
	//����� ���� Ƚ����ŭ �ݺ��Ͽ� ���Ѵ�
	//�׸��� x�� ���Ѵ�


	




}

