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
	//���ڿ��� �ҹ��ڸ� �빮�ڷ� �����Ѵ�
	//src = �Է� ���ڿ�, dst = �빮�� ���� ���ڿ�
	while (*src != '\0') {
	
		if (*src >= 'a' && *src <= 'z') { //�ҹ����� ��
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

int subString(char *src, char *dst, int start, int end) { // ���ڿ� �ڸ���

	//start~ end��° �ڸ���
	if (start < 5 && end < 5) { //�Է��� ���ڰ� ���ڿ��� ���̸� ���� ������
	
		int c = 0;
		for (int i = start; i < end; i++) { //���� 1���� 3������
			dst[c] = src[i];
			dst++;
		}
		dst[c] = '\0'; //������� �Է��̶�� ���� ���� ���ڷ� ǥ��

	} else {
		printf("���ڿ� ���� �Է� ����!");
	}
}