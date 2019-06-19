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
		
		printf("이름을 입력하시오 : ");
		scanf_s("%s", list[i].name, 20);
		printf("학점을 입력하시오(실수) : ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < 3; i++) {
		printf("이름: %s, 학점: %lf\n", list[i].name, list[i].grade);
		plus_all += list[i].grade;
		if (list[i].grade > max) {
			max = list[i].grade;
		}
	}

	plus_all = plus_all / 3;
	printf("학생들의 평균 점수는 %lf입니다.\n", plus_all);
	printf("가장 최고점을 맞은 학생의 점수는 %lf입니다.\n", max);

	
}