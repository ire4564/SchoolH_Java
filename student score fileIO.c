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
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	} //파일이 열리지 않을 때 처리


	for (i = 0; i < 3; i++) {
		
		printf("이름을 입력하시오 : ");
		scanf_s("%s", list[i].name, 20);
		printf("학점을 입력하시오(실수) : ");
		scanf_s("%lf", &list[i].grade);
		fprintf(f, "%s %lf\n", list[i].name, list[i].grade); //파일에 쓰기
	}
	fclose(f);

	for (i = 0; i < 3; i++) {
		fscanf(f, "%s %lf \n", &list[i].name, &list[i].grade); //파일에서 읽기
		fprintf(stdout, "이름 : %s  학점: %lf \n", list[i].name, list[i].grade); //파일에서 읽기
		plus_all += list[i].grade;
		if (list[i].grade > max) {
			max = list[i].grade;
		}
	}
	fclose(f);

	plus_all = plus_all / 3;
	printf("학생들의 평균 점수는 %lf입니다.\n", plus_all);
	printf("가장 최고점을 맞은 학생의 점수는 %lf입니다.\n", max);
	printf("학생들의 점수 파일이 생성되었습니다. 메모장으로 열어보세요.");

	
}