#include <stdio.h>

int main() {

	int N,K = 0, time = 0; // n은 마리, k는 자연수
	scanf("%d", &N);

	while (N > 0) {
		K++;// 1부터 오름차순
		if (N < K)
			K = 1;
		N -= K;
		time++;

	}

	printf("%d\n", time);

	return 0;
}
