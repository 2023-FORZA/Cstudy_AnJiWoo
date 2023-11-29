#include <stdio.h>
#include <string.h>

int main() {
    int T, index;
    char str[81];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %s", &index, str);

        int len = strlen(str);
        for (int j = 0; j < len; j++) {
            if (j != index - 1) {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
