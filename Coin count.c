#include <stdio.h>

void main(void) {

	int money;
	int f_money; //���� �ݾ� ����
	
	printf("\n ���ϴ� �ݾ��� �Է����ּ��� : ");
	scanf_s("%d", &money);

	printf("500��¥�� ���� %d ��", money/500);
	if (money % 500 != 0) { //���� 500������ �������� �������� 0�� 
		//�ƴ϶��
		f_money = money % 500;
		printf("100��¥�� ���� %d ��", f_money / 100);//���� 100������ �������� �������� 0�� 
		f_money = f_money % 100;
		if (f_money % 100 != 0) {
			printf("50��¥�� ���� %d ��", f_money / 50);//���� 50������ �������� �������� 0�� 
			f_money = f_money % 50;
			if (f_money % 50 != 0) {//���� 10������ �������� �������� 0�� 
				printf("10��¥�� ���� %d ��", f_money / 10);
				f_money = f_money % 10;
				if (f_money % 10 != 0) {
					printf("1��¥�� ���� %d ��", f_money / 1);//���� 500������ �������� �������� 0�� 
					f_money = f_money % 1;
				}
			}
		}

	}
	
}