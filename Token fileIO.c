#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	char *fname = "computer.txt";
	char *fname2 = "computer(������).txt";
	FILE *f1, *f2;
	char *result;//��ū �ڸ��� ���

	if ((f1 = fopen(fname, "w")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	fprintf(f1, "computer network is very interesting\n");
	fclose(f1);

	printf("������ �����Ǿ����ϴ�. Ȯ�����ּ���.\n");
	//ó�� ���� ���� �Ϸ�

	//���� ����
	if ((f1 = fopen(fname, "r")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	if (f1 != NULL) {
		//���Ͽ��� �ҷ��� ������ �迭�� �����ϱ�
		char texts[100];

		fgets(texts, 100, f1);
		printf("%s", texts);
		
		result = strtok(texts," "); //��ū���� ������
		
		//����2 ����
		if ((f2 = fopen(fname2, "w")) == NULL)
		{
			printf("������ ������ �ʽ��ϴ�.\n");
			exit(1);
		}

		while (result != NULL) {
			//printf("%s\n", result);
			char *token = result;
			if ((token[0] >= 'a') && (token[0] <= 'z')) {
				token[0] = token[0] - 32; //�빮�ڸ� �ٲٱ�
			}
			fprintf(f2, "%s ", token);
			result = strtok(NULL, " "); //�����ɷ� �Ѿ�� ����
		}
	}
	printf("������ f1 ������ �����Ͽ� ����� �Ͽ����ϴ�. Ȯ�����ּ���.");
	fclose(f1);
//	fclose(f2);
	

}