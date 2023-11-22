#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int num = 1;
        for (int j = 0; j < b; j++) {
            num *= a;
            num %= 10;
        }

        if (num != 0) {
            printf("%d\n", num);
        }
        else {
            printf("10\n");
        }
    }

    return 0;
}
