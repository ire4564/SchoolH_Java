#include <stdio.h>
#define DECODE 0
#define ENCODE 1

void caesar(char* input, char* output, const int key, const int type) {

	//int count = 0;

	if (type == DECODE) //��ȣȭ �ϴ� ����
	{

		//�Է¹��� ���ڿ��� input, input�� �ִ� ������ *�� ��Ÿ��
		//�Է¹��� ���ڸ� key��ŭ +�ؼ�
		//output�� �ֱ�
		while (*input != '\0') { //���� ������ ���� ���ؼ�

			if (*input >= 'a' && *input <= 'z') { //�Է¹��� ���� �ҹ����϶�
				*output = *input + key;
			}
			else if (*input >= 'A' && *input <= 'Z') { //�Է¹��� ���� �빮���϶�
				*output = *input + key;
			}
			else if (*input + key > 'Z') { //�Է¹��� Ű ���� Z(�빮��)���� Ŭ ���
				*output = *input % 'Z' -1 + 'A' ;

			}
			else if (*input + key > 'z') { //�Է¹��� Ű ���� z(�ҹ���)���� Ŭ ���
				*output = *input % 'z' - 1 + 'a';

			}
			
			++input; //�ּ� �̵�
			++output;
			*output = NULL;

		}

	}
	else { //INCODE �ϴ� ����

		while (*input != '\0') {
			if (*input >= 'a' && *input <= 'z') { //�Է¹��� ���� �ҹ����϶�
				*output = *input - key;
			}
			else if (*input >= 'A' && *input <= 'Z') { //�Է¹��� ���� �빮���϶�
				*output = *input - key;
			}
			else if (*input + key > 'Z') { //�Է¹��� Ű ���� Z(�빮��)���� Ŭ ���
				*output = *input % 'Z' - 1 - 'A';

			}
			else if (*input + key > 'z') { //�Է¹��� Ű ���� z(�ҹ���)���� Ŭ ���
				*output = *input % 'z' - 1 - 'a';

			}

			++input; //�ּ� �̵�
			++output;
			*output = NULL;

		}
	}
	

}


int main(void) {

	char inputs[50] = { 0, }; //�Է��� ���ڿ�
	char outputs[30]= { 0, };//��ȯ�Ǵ� ���ڿ�
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

