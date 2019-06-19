#include <stdio.h>

struct polynomial {
	int coeff; //계수
	int exp; //지수
};





void main() {

	struct polynomial pn[5]; //다섯개 입력을 위해
	int e_num = 0;
	int x = 0;
	int result = 0;
	int final[5];

	for (int i = 0; i < 5; i++) {
		printf("%d번째 계수를 입력해주세요 : ", i + 1);
		scanf_s("%d", &pn[i].coeff);
		printf("%d번째 지수를 입력해주세요 : ", i + 1);
		scanf_s("%d", &pn[i].exp);
	}

	printf("생성된 식은 다음과 같습니다.\n");
	for (int i = 0; i < 4; i++) {
		printf("%dx^%d + ", pn[i].coeff, pn[i].exp);
		e_num++;
	}
	printf("%dx^%d", pn[4].coeff, pn[4].exp);

	printf("현재 식에서는 %d개의 차수가 사용되었습니다.\n식을 계산할 x 값을 입력해 주세요. :", e_num);
	scanf_s("%d", &x);

	for (int i = 0; i < 5; i++) { //구조체 배열을 돌기 시작
		result = pn[i].coeff; //첫번째 계수를 result 변수에 저장하고
		for (int i = 0; i < pn[i].exp; i++) { //차수 만큼 반복
			x *= x; // x를 차수번만큼 연산
		}
		result = result * x; 
		final[i] = result;
	}

	for (int i = 0; i < 5; i++) {
		result += final[i];
	}
	
	printf("식의 계산 결과는 %d입니다.", result);

}

void cal(int x) {

	//x의 값이 들어오면
	//계수를 지수 횟수만큼 반복하여 곱한다
	//그리고 x를 곱한다


	




}

