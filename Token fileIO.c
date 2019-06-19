#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	char *fname = "computer.txt";
	char *fname2 = "computer(수정본).txt";
	FILE *f1, *f2;
	char *result;//토큰 자르기 사용

	if ((f1 = fopen(fname, "w")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	fprintf(f1, "computer network is very interesting\n");
	fclose(f1);

	printf("파일이 생성되었습니다. 확인해주세요.\n");
	//처음 파일 생성 완료

	//파일 열기
	if ((f1 = fopen(fname, "r")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	if (f1 != NULL) {
		//파일에서 불러온 정보를 배열에 저장하기
		char texts[100];

		fgets(texts, 100, f1);
		printf("%s", texts);
		
		result = strtok(texts," "); //토큰으로 나누기
		
		//파일2 열기
		if ((f2 = fopen(fname2, "w")) == NULL)
		{
			printf("파일이 열리지 않습니다.\n");
			exit(1);
		}

		while (result != NULL) {
			//printf("%s\n", result);
			char *token = result;
			if ((token[0] >= 'a') && (token[0] <= 'z')) {
				token[0] = token[0] - 32; //대문자를 바꾸기
			}
			fprintf(f2, "%s ", token);
			result = strtok(NULL, " "); //다음걸로 넘어가는 과정
		}
	}
	printf("생성된 f1 파일을 수정하여 재생성 하였습니다. 확인해주세요.");
	fclose(f1);
//	fclose(f2);
	

}