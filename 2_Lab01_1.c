#include <stdio.h>

int main() {
    int L, N;
    scanf("%d %d", &L, &N);

    int cake[1001] = { 0 };
    int getCake[1001] = { 0 };

    int maxIndex = 0;  // ���� ���� ������ ���� ������ ����� ��û��
    int maxCake = 0;   // ������ ���� ���� ������ ���� ��û��

    int maxExpectedPieces = 0; // ���� ���� ������ ���� ������ ����ϴ� ���� ��

    for (int i = 1; i <= N; i++) {
        int start, end;
        scanf("%d %d", &start, &end);

        int expectedPieces = end - start + 1;  // ��û���� ����� ���� ��

        // ������ũ�� ������ �й��ϰ� ��� ���
        for (int j = start; j <= end; j++) {
            if (cake[j] == 0) {  // ���� �������� ���� ������ ���
                getCake[i]++;   // ��û�� i�� ������ ����
                cake[j] = 1;    // ������ �������� ǥ��
            }
        }

        // ���� ���� ������ ���� ������ ����� ��û�� ������Ʈ
        if (expectedPieces > maxExpectedPieces) {
            maxExpectedPieces = expectedPieces;
            maxIndex = i;
        }
    }

    // ������ ���� ���� ������ ���� ��û�� ������Ʈ
    for (int i = 1; i <= N; i++) {
        if (maxCake < getCake[i]) {
            maxCake = getCake[i];
        }
    }

    // ���� ���� ������ ���� ������ ����ϰ� �ִ� ��û�� ���
    printf("%d\n", maxIndex);

    // ������ ���� ���� ������ ���� ��û�� ���
    for (int i = 1; i <= N; i++) {
        if (maxCake == getCake[i]) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
