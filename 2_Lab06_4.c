#include <stdio.h>
#include <string.h>

int main() {
	char n[101];
	int sum1=0, sum2 = 0;

	scanf("%s", &n);

	int st_size = strlen(n) / 2;

	for (int i = 0; i < st_size; i++) {
		sum1 += n[i] - '0'; //���ڿ��� �Էµ� ���ڸ� ���ڷ� ��ȯ�ϴ� ���Դϴ�.
		sum2 += n[i + st_size] - '0';
	}

	if (sum1 == sum2)
		printf("LUCKY\n");
	else
		printf("READY\n");

	return 0;
}