#include <stdio.h>

int main() {

	int N,K = 0, time = 0; // n�� ����, k�� �ڿ���
	scanf("%d", &N);

	while (N > 0) {
		K++;// 1���� ��������
		if (N < K)
			K = 1;
		N -= K;
		time++;

	}

	printf("%d\n", time);

	return 0;
}
