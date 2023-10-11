#include <stdio.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 0) {
            break;
        }

        int prevnum = 0; // 이전에 출력된 숫자를 0으로 초기화

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);

            if (num != prevnum) {
                if (i > 0) { // 첫번째 숫자 앞에는 공백을 추가하지 않기 위해
                    printf(" ");
                }
                printf("%d", num);
            }

            prevnum = num; // 이전에 출력된 숫자 업데이트
        }

        printf(" $\n");
    }
    return 0;
}
