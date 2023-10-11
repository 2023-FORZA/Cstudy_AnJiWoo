#include <stdio.h>

int main() {

	int N, M, num = 0; // 0 < num < 100000, N은 카드의 개수,
	int sum = 0;
	int	max = -1;
	int card[101];

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", &card[i]);
	}

	for (int i = 0; i < N-2;i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = card[i] + card[j] + card[k];
				if (sum > max && sum <= M) {
					max = sum;
				}
			}
		}
	}
	
	printf("%d", max);

	return 0;

}