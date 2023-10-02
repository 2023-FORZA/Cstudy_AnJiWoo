#include <stdio.h>

int main() {
    int N, m, M, T, R;
    int exercise = 0, h = 0;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    int C = m; // 현재 맥박

    while (exercise < N) {
        if (m + T > M) { //맨처음부터 안될수도 있으니까
            printf("-1");
            return 0;
        }

        if (C + T <= M) {
            C += T;
            h += 1;
            exercise += 1;
        }
        else {
            C -= R; // 휴식 후 맥박
            if (C < m) {
                C = m; // 맥박이 m보다 작으면 다시 m으로 설정
            }
            h += 1;
        }
    }

    printf("%d", h);
    return 0;
}