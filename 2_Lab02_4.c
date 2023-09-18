#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Enter 키 처리

    for (int i = 0; i < n; i++) {
        char name[30];
        fgets(name, sizeof(name), stdin);
        int len = strlen(name);

        int g_count = 0, b_count = 0;

        for (int j = 0; j < len; j++) {
            char c = tolower(name[j]);
            if (c == 'g') {
                g_count++;
            }
            else if (c == 'b') {
                b_count++;
            }
        }

        name[len - 1] = '\0'; // 줄바꿈 문자 제거

        printf("%s is ", name);

        if (g_count > b_count) {
            printf("GOOD");
        }
        else if (g_count < b_count) {
            printf("A BADDY");
        }
        else {
            printf("NEUTRAL");
        }

        printf("\n");
    }

    return 0;
}
