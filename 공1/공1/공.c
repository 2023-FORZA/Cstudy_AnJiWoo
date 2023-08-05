#include <stdio.h>

int main() {
    int cups[4] = { 0, 1, 0, 0 }; // 컵의 위치를 나타내는 배열, 초기에 공은 두 번째 컵에 숨겨져 있음
    int M, X, Y, temp;

    scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &X, &Y);
        temp = cups[X];
        cups[X] = cups[Y];
        cups[Y] = temp;
    }

    for (int i = 1; i <= 3; i++) {
        if (cups[i] == 1) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
