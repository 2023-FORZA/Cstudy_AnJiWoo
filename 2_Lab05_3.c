#include <stdio.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        }

        int prevnum = 0; // ������ ��µ� ���ڸ� 0���� �ʱ�ȭ

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);

            if (num != prevnum) {
                if (i > 0) { // ù��° ���� �տ��� ������ �߰����� �ʱ� ����
                    printf(" ");
                }
                printf("%d", num);
            }

            prevnum = num; // ������ ��µ� ���� ������Ʈ
        }

        printf(" $\n");
    }
    return 0;
}
