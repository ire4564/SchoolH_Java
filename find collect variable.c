#include <stdio.h>

void main(void) {

	char name1, name2, name3, name4, name5;

	printf("\n 변수 명을 입력해주세요 : ");

	name1 = getchar();
	name2 = getchar();
	name3 = getchar();
	name4 = getchar();
	name5 = getchar();

	/*
	if (name1 == ' ' | name2 == ' ' | name3 == ' ' | name4 == ' ' | name5 == ' '){ //공백처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '&' | name2 == '&' | name3 == '&' | name4 == '&' | name5 == '&') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '-' | name2 == '-' | name3 == '-' | name4 == '-' | name5 == '-') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '$' | name2 == '$' | name3 == '$' | name4 == '$' | name5 == '$') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (isdigit(name1)) { //앞숫자가 숫자일때
		printf("올바른 변수명이 아닙니다.");
	}
	else {
	printf("변수가 생성되었습니다."); //올바르게 생성되었을 경우
	}*/

	//isdigit()를 이용한 처리
	
	if (name1 == ' ' | name2 == ' ' | name3 == ' ' | name4 == ' ' | name5 == ' '){ //공백처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '&' | name2 == '&' | name3 == '&' | name4 == '&' | name5 == '&') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '-' | name2 == '-' | name3 == '-' | name4 == '-' | name5 == '-') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}
	else if (name1 == '$' | name2 == '$' | name3 == '$' | name4 == '$' | name5 == '$') { //특수문자 처리
		printf("올바른 변수명이 아닙니다.");
	}

	else if (name1 ==  '0' | name1 == '1' | name1 == '2' | name1 == '3' | name1 == '4' | name1 == '5' | name1 == '6' | name1 == '7' | name1 == '8' | name1 == '9' ) {
		printf("올바른 변수명이 아닙니다.");
	}
	else {
		printf("변수가 생성되었습니다."); //올바르게 생성되었을 경우
	}
	//printf("%c%c%c%c%c", name1, name2, name3, name4, name5);

}