#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    scanf("%d", &num);
    char list1[1000][1000];
    for (int i = 0; i < num; i++) {
        scanf("%s", list1[i]);
    }

    if (num == 1) {
        printf("%s\n", list1[0]);
    }
    else {
        int list2[1000] = { 0 }; //

        for (int i = 0; i < strlen(list1[0]); i++) {
            int count = 0;

            for (int j = 1; j < num; j++) {
                if (list1[0][i] == list1[j][i]) {
                    count++;
                }
            }

            list2[i] = count;
        }

        for (int i = 0; i < strlen(list1[0]); i++) {
            if (list2[i] == num - 1) {
                printf("%c", list1[0][i]);
            }
            else {
                printf("?");
            }
        }

        printf("\n");
    }

    return 0;
}