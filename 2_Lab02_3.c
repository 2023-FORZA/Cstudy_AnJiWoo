#include <stdio.h>
#include <string.h>

int main() {
	char S[1000000];
	scanf("%s", S);

	int len = strlen(S);
	int count = 0;

	for (int i = 0; i < len-1; i++) {
		if (S[i] != S[i + 1])
			count++;
	}
	if (count % 2 == 0)
		printf("%d", count / 2);
	else
		printf("%d", count / 2 + 1);
	
	return 0;
}
