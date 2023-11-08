#include <stdio.h>

int main() {
	int N;
	int arr[100000] = {0};
	int num = 1, k = 0; //num = 1인 이유는 자기 자신은 보일테니까

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	k = arr[N - 1];// 오른쪽 막대의 길이
	for (int i = N - 1; i >= 0; i--) {
		if (k < arr[i]) {
			num++;
			k = arr[i]; // 길이를 계속 업데이트
		}
	}

	printf("%d", num);

	return 0;
}