#include <stdio.h>

int main(void) {
    int A[20] = { 0 };
    int N, K;

    // �Է�: ���� ũ��� ���� Ƚ�� �Է�
    scanf("%d %d", &N, &K);

    // �Է�: ���� ���� �Է� (��ǥ�� ����)
    for (int i = 0; i < N - 1; i++) {
        scanf("%d,", &A[i]);
    }
    scanf("%d", &A[N - 1]);

    // ���� ����
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

    // ���: ������ ���� ��� (��ǥ�� ����)
    for (int i = 0; i < N - 1; i++) {
        printf("%d,", A[i]);
    }
    printf("%d\n", A[N - 1]);

    return 0;
}
