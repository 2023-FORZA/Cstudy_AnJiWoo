#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool canMake2023(char* s) {
    char* check = "2023";
    int cnt = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (check[cnt] == s[i]) {
            cnt++;
        }
        if (cnt == 4) {
            return true;
        }
    }

    return false;
}

int main() {
    int n, cnt = 0;
    char s[20]

        scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sprintf(s, "%d", i);
        if (canMake2023(s)) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
