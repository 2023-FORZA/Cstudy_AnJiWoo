#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);
	
	int current[500500];//������ ũ��
	int index = 1;

	for (int i = 0; i <= 500500; i++) {
		current[i] = 0; // �迭 �ʱ�ȭ
	}

	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j < i; j++) {
			current[index++] = i;
		}
	}

	int sum = 0;
	for (int i = A; i <= B; i++) {
		sum += current[i];
	}

	printf("%d\n", sum);
	return 0;

}
