#include <stdio.h>

int uniqueDigits(int x) {
    int digits[10] = { 0 }; // 0~9������ ������ ���� Ƚ�� ���� �迭
    int count = 0; // �Ƹ��ٿ� ������ ������ ������ ����

    while (x > 0) {
        int digit = x % 10;
        digits[digit] = 1;
        x /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digits[i] == 1) {
            count++;
        }
    }

    return count;
}

int main(void) {
    int T; // �׽�Ʈ ���̽��� ����
    scanf("%d", &T);

    for (int j = 0; j < T; j++) {
        int X;
        scanf("%d", &X);

        int beautifulcount = uniqueDigits(X);
        printf("%d\n", beautifulcount);
    }

    return 0;
}
