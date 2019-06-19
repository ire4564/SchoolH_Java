#include <stdio.h>

void checkPassword(char *word) {// 패스워드를 받아서 경고문 출력

	int num = 0; //숫자
	int s_alpha = 0; //소문자
	int b_alpha = 0; //대문자
	int speical = 0; //특수문자 count
	int size = 0; //전체 문자 count

	while (*word != '\0'){ //문자가 공백이 아닐때까지 실행


		if (isupper(*word)) { //대문자일 경우
			b_alpha++;
		}
		else if (islower(*word)) { //소문자일 경우
			s_alpha++;
		}
		else if (isdigit(*word)) { //숫자일 경우
			num++;
		}
		else if ((*word == '@') || (*word == '$') || (*word == '!') || (*word == '#')) {
			//특수 문자일 경우
			speical++;
		} 

		size++;//전체 문자 개수 세기
		++word; //포인터 이동 시켜서 다음 문자로 넘어가기
	
		

		if ((*word == *(word-1)+1) || (*(word-1) == *word-1)) { //입력된 숫자가 알파벳이고, 연속된 알파벳이면
			printf("연속된 문자열은 사용할 수 없습니다. \n");
		}


	} //반복문으로 count한 뒤 판별

	if (size < 10) { //문자열이 10자리가 넘지 않을 경우
		printf("문자열을 10자리 이상 입력 해 주세요!\n");
	}
	if ((num == 0) || (s_alpha == 0) || (b_alpha == 0)) {
		printf("숫자, 소문자, 대문자를 1개 이상 모두 포함해주세요.\n");
	}
	if (speical == 0) {
		printf("특수문자를 포함해 주세요.\n");
	}



}



int main(void) {

	char password[30] = { 0, };

	printf("사용하실 패스워드를 입력해 주세요. : ");
	fgets(password, 30, stdin);

	checkPassword(password);
	


}

