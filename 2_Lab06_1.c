#include <stdio.h>

int main() {
	int N;
	int arr[100000] = {0};
	int num = 1, k = 0; //num = 1�� ������ �ڱ� �ڽ��� �����״ϱ�

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	k = arr[N - 1];// ������ ������ ����
	for (int i = N - 1; i >= 0; i--) {
		if (k < arr[i]) {
			num++;
			k = arr[i]; // ���̸� ��� ������Ʈ
		}
	}

	printf("%d", num);

	return 0;
}