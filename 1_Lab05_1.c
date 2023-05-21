#include <stdio.h>

int main() {
    int i, num, max = 0, t = 0;
    for (i = 1; i <= 9; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
            t = i;
        }
    }
    printf("%d\n%d", max, t);
    return 0;
}
