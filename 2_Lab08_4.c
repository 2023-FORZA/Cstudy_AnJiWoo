 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char bowl[51];
	scanf("%s", bowl);

	int height = 10;
	int len = strlen(bowl);

	for (int i = 1; bowl[i] != '\0'; i++) {
		if (bowl[i] == bowl[i-1]) {
			height += 5;
		}
		else {
			height += 10;
		}
	}

	printf("%d", height);

	return 0;
}