#include <stdio.h>
#include <string.h>

int main() {
	int T, R = 0;
	char S[20] = { 0, };

	scanf("%d", &T);

	for (int k = 0; k < T; k++) {
		scanf("%d %s", &R, &S);

		for (int i = 0; i < strlen(S); i++) {
			for (int j = 0; j < R; j++) {
				printf("%c", S[i]);
			}
		}
		printf("\n");
	}

	return 0;
}