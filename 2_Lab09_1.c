#include <stdio.h>

int main() {
	char arr[5][15] = {0};

	for (int i = 0; i < 5; i++)
		scanf("%s", arr[i]);

		for (int j = 0; j < 15; j++) {
			for (int k = 0; k < 5; k++) {
				if (arr[k][j] != NULL)
					printf("%c", arr[k][j]);
			}
		}

	return 0;
}