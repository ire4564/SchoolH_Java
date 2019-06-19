#include <stdio.h>

int array[10];

int recursive(int n, int look) { //���ڸ� �ΰ� �޾Ƽ� ��� ��ɿ� ����
	if (array[n] == look) { //�ε��� ���� ã�� ���̸�
		return n;
	}
	else if (n<1) { //ã�� ���� ������ ���� 0���ϰ� ����
		return 0;
	}
	return recursive(--n, look); 
} 
	



int main(void) {

	for (int i = 0; i < 10; i++) {
		int x = rand() % (41) + 10; //random%(b+1-a)+a�� a~b���� ���� ���� ����
		array[i] = x;
	} //�迭 ���� �� ���� �����ϰ� ����

	int look;
	int re;

	printf("�迭���� ã�� ���� �Է��Ͻÿ� : \n");
	scanf_s("%d", &look);

	re = recursive(10, look);
	if (re == 0) { //��ȯ ���� 0�� ���
		printf("ã�� ���� �迭�� �������� ����!\n");
	}
	else { //�� ���� ���� ��� �ε��� ���� ���
		printf("ã�� ���� �迭�� [%d]��° �ε����� ������!\n", re);
	}

}