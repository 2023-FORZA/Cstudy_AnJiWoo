#include <stdio.h>
#include <string.h>

extern size_t strlen();

int main() {
	char word[100] = { 0, };
	int position[26] = { -1, };
	int i = 0;
	while (i < 26) {
		position[i] = -1;
		i++;
	}
	scanf("%s", &word);

	for (int k = 97; k < 123; k++)
	{
		for (i = 0; i < strlen(word); i++) {
			if (word[i] == k) {
				position[k - 97] = i;
				break;
			}
		}
	}
	for (int j = 0; j < 26; j++) {
		printf("%d ", position[j]);
	}

	return 0;
}