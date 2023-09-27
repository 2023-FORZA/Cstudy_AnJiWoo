#include <stdio.h>

int main() {
    int pieces[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &pieces[i]);
    }

    while (pieces[0] != 1 || pieces[1] != 2 ||
        pieces[2] != 3 || pieces[3] != 4 ||
        pieces[4] != 5) {

        for (int i = 0; i < 4; i++) {
            if (pieces[i] > pieces[i + 1]) {
                int temp = pieces[i];
                pieces[i] = pieces[i + 1];
                pieces[i + 1] = temp;

                for (int j = 0; j < 5; j++) {
                    printf("%d", pieces[j]);
                    if (j < 4) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
