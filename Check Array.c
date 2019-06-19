#include <stdio.h>

int array[10];

int recursive(int n, int look) { //인자를 두개 받아서 재귀 기능에 쓰기
	if (array[n] == look) { //인덱스 값이 찾는 값이면
		return n;
	}
	else if (n<1) { //찾는 값이 없으면 리턴 0을하고 종료
		return 0;
	}
	return recursive(--n, look); 
} 
	



int main(void) {

	for (int i = 0; i < 10; i++) {
		int x = rand() % (41) + 10; //random%(b+1-a)+a는 a~b까지 범위 숫자 랜덤
		array[i] = x;
	} //배열 생성 후 난수 랜덤하게 설정

	int look;
	int re;

	printf("배열에서 찾을 값을 입력하시오 : \n");
	scanf_s("%d", &look);

	re = recursive(10, look);
	if (re == 0) { //반환 값이 0일 경우
		printf("찾는 수가 배열에 존재하지 않음!\n");
	}
	else { //그 외의 값일 경우 인덱스 값을 출력
		printf("찾는 수가 배열의 [%d]번째 인덱스에 존재함!\n", re);
	}

}