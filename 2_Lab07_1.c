#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int heights[1001];
    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    if (N == 1) {
        printf("0\n"); // N�� 1�̸� ���������� �����Ƿ� 0 ���
        return 0; // ���α׷� ���� �ڵ�
    }

    int current_road = 0;
    int max_road = 0;

    for (int i = 1; i < N; i++) {
        if (heights[i] > heights[i - 1]) {
            current_road += heights[i] - heights[i - 1];
        }
        else {
            if (current_road > max_road) {
                max_road = current_road;
            }
            current_road = 0;
        }
    }

    if (current_road > max_road) {
        max_road = current_road;
    }

    printf("%d\n", max_road);

    return 0;
}
