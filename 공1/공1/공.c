#include <stdio.h>

int main() {
    int cups[4] = { 0, 1, 0, 0 }; // ���� ��ġ�� ��Ÿ���� �迭, �ʱ⿡ ���� �� ��° �ſ� ������ ����
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
