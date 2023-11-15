#include <stdio.h>

int N, M, L;
int throwCnt, cur;
int ballCnt[1001];

int main() {
    scanf("%d %d %d", &N, &M, &L);
    ballCnt[cur] = 1;

    while (ballCnt[cur] != M) {
        if (ballCnt[cur] % 2) {
            cur = (cur + L) % N;
        }
        else {
            cur = (N + (cur - L)) % N;
        }

        ballCnt[cur]++;
        throwCnt++;
    }

    printf("%d\n", throwCnt);

    return 0;
}
