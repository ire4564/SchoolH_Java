#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	char *fname1 = "sample1.txt";
	char *fname2 = "sample2.txt";
	char filename1[50], filename2[50];
	FILE *fp1, *fp2;
	char f1[50], f2[50];
	 
	//����1 ����
	if ((fp1 = fopen(fname1, "w")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	
	fprintf(fp1, "Hi.\nHello.\nNice too meet U!");
	fclose(fp1);

	//����2 ����
	if ((fp2 = fopen(fname2, "w")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	fprintf(fp2, "Hi.\nHello.\nNice too meet U!");
	fclose(fp2);

	printf("ù ��° �����̸�: ");
	gets(filename1);
	printf("�� ��° �����̸�: ");
	gets(filename2);

	if ((fp1 = fopen(fname1, "r")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	//����2 ����
	if ((fp2 = fopen(fname2, "r")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}


	while (1) {
		fgets(f1, sizeof(f1), fp1);
		fgets(f2, sizeof(f2), fp2); //���๮�ڰ� ���Ë����� �Է¹ޱ�
		if (strcmp(f1, f2) != 0) //f1ũ�� ���, �ƴϸ� ����, ������ 0
		{
			printf("\n<< %s", f1); //��ġ���� ������ 
			printf("\n>> %s", f2); //��ġ���� �ʴ� ���� ��ȯ
			break;
		}
		if (feof(fp1) != 0) {
			printf("\n������ ���� ��ġ�մϴ�.\n");
			break;
		}

	}

	fclose(fp1);
	fclose(fp2);
}