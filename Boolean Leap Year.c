#include <stdio.h>

int check_data(int year, int month, int day) {

	

		//������ ����
		//4�� ������ ��������, ���� 100���� ������ �������� �ƴϴ�, 400���� �������� ������ �����̴�
	if (year % 4 != 0 || (year % 100 == 0 && year%400!=0)) {//������ �ƴ�
		if (month == 2 && (day >= 29)) {
			return 0;
		}
	} else if (month > 12 && month<1) { //1,3,5,7,8,10,12���� 31�� 2,4,6,9,11���� 30�ϱ���
				return 0;
	} else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day > 31) {
				return 0;
		}
	}
	else if (year == 0 && month == 0 && day == 0) {
		return 0;
	}
	else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) {
			return 0;
		}
	} else {
		return 1;
	}


}
	


int main(void) {
	int year, month, day;
	int re;

	do {
		printf("�⵵, ��, ���� ���ʴ�� �Է� ���ּ���. :");
		scanf_s("%d", &year);
		scanf_s("%d", &month);
		scanf_s("%d", &day);

		re = check_data(year, month, day);

		if (re == 0) {
			printf("��ȿ�� ��¥�� �ƴմϴ�. �ٽ� �Է����ּ���. \n");
		} else{
			printf("�Է��Ͻ� ��¥�� ��ȿ�� ��¥�Դϴ�.");
			break;
		}
	} while (1);
	
	
}