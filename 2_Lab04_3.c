#include <stdio.h>

int main() {
    int N, m, M, T, R;
    int exercise = 0, h = 0;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    int C = m; // ���� �ƹ�

    while (exercise < N) {
        if (m + T > M) { //��ó������ �ȵɼ��� �����ϱ�
            printf("-1");
            return 0;
        }

        if (C + T <= M) {
            C += T;
            h += 1;
            exercise += 1;
        }
        else {
            C -= R; // �޽� �� �ƹ�
            if (C < m) {
                C = m; // �ƹ��� m���� ������ �ٽ� m���� ����
            }
            h += 1;
        }
    }

    printf("%d", h);
    return 0;
}