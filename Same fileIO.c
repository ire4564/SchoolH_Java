#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	char *fname1 = "sample1.txt";
	char *fname2 = "sample2.txt";
	char filename1[50], filename2[50];
	FILE *fp1, *fp2;
	char f1[50], f2[50];
	 
	//파일1 열기
	if ((fp1 = fopen(fname1, "w")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	
	fprintf(fp1, "Hi.\nHello.\nNice too meet U!");
	fclose(fp1);

	//파일2 열기
	if ((fp2 = fopen(fname2, "w")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	fprintf(fp2, "Hi.\nHello.\nNice too meet U!");
	fclose(fp2);

	printf("첫 번째 파일이름: ");
	gets(filename1);
	printf("두 번째 파일이름: ");
	gets(filename2);

	if ((fp1 = fopen(fname1, "r")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	//파일2 열기
	if ((fp2 = fopen(fname2, "r")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}


	while (1) {
		fgets(f1, sizeof(f1), fp1);
		fgets(f2, sizeof(f2), fp2); //개행문자가 나올떄까지 입력받기
		if (strcmp(f1, f2) != 0) //f1크면 양수, 아니면 음수, 같으면 0
		{
			printf("\n<< %s", f1); //일치하지 않으면 
			printf("\n>> %s", f2); //일치하지 않는 문장 반환
			break;
		}
		if (feof(fp1) != 0) {
			printf("\n파일은 서로 일치합니다.\n");
			break;
		}

	}

	fclose(fp1);
	fclose(fp2);
}