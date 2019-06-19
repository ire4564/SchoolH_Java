#include <stdio.h>
#define DECODE 0
#define ENCODE 1

void caesar(char* input, char* output, const int key, const int type) {

	//int count = 0;

	if (type == DECODE) //암호화 하는 과정
	{

		//입력받은 문자열이 input, input에 있는 값들을 *로 나타냄
		//입력받은 문자를 key만큼 +해서
		//output에 넣기
		while (*input != '\0') { //문자 끝까지 돌기 위해서

			if (*input >= 'a' && *input <= 'z') { //입력받은 값이 소문자일때
				*output = *input + key;
			}
			else if (*input >= 'A' && *input <= 'Z') { //입력받은 값이 대문자일때
				*output = *input + key;
			}
			else if (*input + key > 'Z') { //입력받은 키 값이 Z(대문자)보다 클 경우
				*output = *input % 'Z' -1 + 'A' ;

			}
			else if (*input + key > 'z') { //입력받은 키 값이 z(소문자)보다 클 경우
				*output = *input % 'z' - 1 + 'a';

			}
			
			++input; //주소 이동
			++output;
			*output = NULL;

		}

	}
	else { //INCODE 하는 과정

		while (*input != '\0') {
			if (*input >= 'a' && *input <= 'z') { //입력받은 값이 소문자일때
				*output = *input - key;
			}
			else if (*input >= 'A' && *input <= 'Z') { //입력받은 값이 대문자일때
				*output = *input - key;
			}
			else if (*input + key > 'Z') { //입력받은 키 값이 Z(대문자)보다 클 경우
				*output = *input % 'Z' - 1 - 'A';

			}
			else if (*input + key > 'z') { //입력받은 키 값이 z(소문자)보다 클 경우
				*output = *input % 'z' - 1 - 'a';

			}

			++input; //주소 이동
			++output;
			*output = NULL;

		}
	}
	

}


int main(void) {

	char inputs[50] = { 0, }; //입력한 문자열
	char outputs[30]= { 0, };//반환되는 문자열
	char outputs2[30] = { 0, };
	int key;
	int select;

	printf("please input your string : ");
	fgets(inputs, 50, stdin);
	printf("please input caesar Key number : ");
	scanf_s("%d", &key);
	printf("select DECODEING(0) or INCODEING(1) : ");
	scanf_s("%d", &select);

	caesar(inputs, outputs, key, select);
	printf("DECODING String : %s\n", outputs);
	
	printf("please input caesar Key number : ");
	scanf_s("%d", &key);

	caesar(outputs, outputs2, key, 1);
	printf("INCODING String : %s", outputs2);



}

