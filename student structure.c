#include <stdio.h>

struct student {
	
	char name[20];
	double grade;
};

void main() {

	struct student list[3];
	int i;
	double plus_all = 0;
	double max = 0;


	for (i = 0; i < 3; i++) {
		
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf_s("%s", list[i].name, 20);
		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %lf\n", list[i].name, list[i].grade);
		plus_all += list[i].grade;
		if (list[i].grade > max) {
			max = list[i].grade;
		}
	}

	plus_all = plus_all / 3;
	printf("�л����� ��� ������ %lf�Դϴ�.\n", plus_all);
	printf("���� �ְ����� ���� �л��� ������ %lf�Դϴ�.\n", max);

	
}