#include <stdio.h>

int main() {
	int name_length;
	scanf("%d", &name_length);

	char name[101];
	scanf("%s", name);

	int name_score = 0;
	for (int i = 0; i < name_length; i++) {
		name_score += name[i] - 'A' + 1;
	}

	printf("%d\n", name_score);

	return 0;
}