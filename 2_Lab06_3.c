#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    // �� �ڸ����� �ټ������� ����Ͽ� �ջ�
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 5);
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}
