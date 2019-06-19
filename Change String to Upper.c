#include <stdio.h>
#include <string.h>

void toUpperCase(char *, char *);

int main(void) {

	char src[] = "Hello!";
	char dst[10];
	//char new_src[];

	toUpperCase(src, dst);
	printf("toUpperCase : %s, %s\n", src, dst);
	subString(src, dst, 0, 3);
	printf("subStringCase: %s, %s\n", src, dst);

}

void toUpperCase(char *src, char *dst) {
	//문자열의 소문자를 대문자로 변경한다
	//src = 입력 문자열, dst = 대문자 변경 문자열
	while (*src != '\0') {
	
		if (*src >= 'a' && *src <= 'z') { //소문자일 때
			*dst = *src - 32;
		}
		else {
			*dst = *src;
		}
		++src;
		++dst;
		*dst = NULL;
	}

}

int subString(char *src, char *dst, int start, int end) { // 문자열 자르기

	//start~ end번째 자르기
	if (start < 5 && end < 5) { //입력한 숫자가 문자열의 길이를 넘지 않으면
	
		int c = 0;
		for (int i = start; i < end; i++) { //만약 1부터 3까지면
			dst[c] = src[i];
			dst++;
		}
		dst[c] = '\0'; //여기까지 입력이라는 것을 공백 문자로 표시

	} else {
		printf("문자열 범위 입력 오류!");
	}
}