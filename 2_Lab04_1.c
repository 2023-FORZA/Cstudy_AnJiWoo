#include <stdio.h>

int uniqueDigits(int x) {
    int digits[10] = { 0 }; // 0~9까지의 숫자의 등장 횟수 저장 배열
    int count = 0; // 아름다운 숫자의 개수를 저장할 변수

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
    int T; // 테스트 케이스의 개수
    scanf("%d", &T);

    for (int j = 0; j < T; j++) {
        int X;
        scanf("%d", &X);

        int beautifulcount = uniqueDigits(X);
        printf("%d\n", beautifulcount);
    }

    return 0;
}
