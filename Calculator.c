#include <stdio.h>
float Max;
float Min;
float Mid;


int GetMin(float num1, float num2, float num3) {
	if (num1 < num2) { //1과 2중 2가 더 크면
		Min = num1;
		if (num1< num3) { //비교했던 2와 새로운 3을 비교해서 
			Min = num1; //3이 더 크면
		}
	}
	else if (num2 < num3) { //1이 전 수보다 클때 바로 3과 비교해서 
		 //3이 클경우
		Min = num2;
	}
	else if (num3 < num1) {
		Min = num3;
	}
	printf("제일 작은 마지막 수는 %f입니다.\n", Min);
}

//최소값

int GetMax(float num1, float num2, float num3) {
	if (num1 < num2) { //1과 2중 2가 더 크면
		Max = num2;
		if (num2 < num3) { //비교했던 2와 새로운 3을 비교해서 
			Max = num3; //3이 더 크면
		}
	} else if (num1 < num3) { //1이 전 수보다 클때 바로 3과 비교해서 
			//3이 클경우
			Max = num3;
	} else if (num3 <num1) { 
			Max = num1;
	}
		printf("제일 큰 첫번째 수는 %f입니다.\n", Max);
}

//최대값

int GetMid(float num1, float num2, float num3) {
	if (num1 != Max && num1 !=Min) { //num1이 최대값도 아니고 최소값도 아닐때
		Mid = num1;
		printf("중간의 수는 %f입니다.\n", Mid);
		
	} else if (num2 != Max && num2 != Min) {//num2이 최대값도 아니고 최소값도 아닐때
		Mid = num2;
		printf("중간의 수는 %f입니다.\n", Mid);

	}
	else {//num3이 최대값도 아니고 최소값도 아닐때
		Mid = num3;
		printf("중간의 수는 %f입니다.\n", Mid);
	}
	
}//중간값


int main(void) {
	float num1;
	float num2;
	float num3;

	printf("실수 세 개를 입력해주세요 : \n");
	scanf_s("%f", &num1);
	scanf_s("%f", &num2);
	scanf_s("%f", &num3);

	GetMax(num1, num2, num3);
	GetMin(num1, num2, num3);
	GetMid(num1, num2, num3);

	//printf("%f%f%f의 순서는 수는 %f%f%f입니다.\n", f1, f2, f3, GetMin(f1,f2,f3), GetMid(f1, f2, f3), GetMax(f1,f2,f3);

}