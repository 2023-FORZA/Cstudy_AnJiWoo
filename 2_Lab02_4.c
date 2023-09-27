#include <stdio.h>

int main(void) {
    int A[20] = { 0 };
    int N, K;

    // 입력: 수열 크기와 변형 횟수 입력
    scanf("%d %d", &N, &K);

    // 입력: 수열 원소 입력 (쉼표로 구분)
    for (int i = 0; i < N - 1; i++) {
        scanf("%d,", &A[i]);
    }
    scanf("%d", &A[N - 1]);

    // 수열 변형
    for (int k = 0; k < K; k++) {
        int B[19];
        for (int i = 0; i < N - 1; i++) {
            B[i] = A[i + 1] - A[i];
        }

        for (int i = 0; i < N - 1; i++) {
            A[i] = B[i];
        }
        N--;
    }

    // 출력: 변형된 수열 출력 (쉼표로 구분)
    for (int i = 0; i < N - 1; i++) {
        printf("%d,", A[i]);
    }
    printf("%d\n", A[N - 1]);

    return 0;
}
