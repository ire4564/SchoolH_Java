#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student {
	
	char name[20];
	double grade;
};

void main() {

	char *fname = "score.txt";
	FILE *f;

	struct student list[3];
	int i;
	double plus_all = 0;
	double max = 0;

	if ((f = fopen(fname, "w")) == NULL) {
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	} //������ ������ ���� �� ó��


	for (i = 0; i < 3; i++) {
		
		printf("�̸��� �Է��Ͻÿ� : ");
		scanf_s("%s", list[i].name, 20);
		printf("������ �Է��Ͻÿ�(�Ǽ�) : ");
		scanf_s("%lf", &list[i].grade);
		fprintf(f, "%s %lf\n", list[i].name, list[i].grade); //���Ͽ� ����
	}
	fclose(f);

	for (i = 0; i < 3; i++) {
		fscanf(f, "%s %lf \n", &list[i].name, &list[i].grade); //���Ͽ��� �б�
		fprintf(stdout, "�̸� : %s  ����: %lf \n", list[i].name, list[i].grade); //���Ͽ��� �б�
		plus_all += list[i].grade;
		if (list[i].grade > max) {
			max = list[i].grade;
		}
	}
	fclose(f);

	plus_all = plus_all / 3;
	printf("�л����� ��� ������ %lf�Դϴ�.\n", plus_all);
	printf("���� �ְ����� ���� �л��� ������ %lf�Դϴ�.\n", max);
	printf("�л����� ���� ������ �����Ǿ����ϴ�. �޸������� �������.");

	
}