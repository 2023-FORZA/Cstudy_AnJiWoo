#include <stdio.h>

int main() {
    int L, N;
    scanf("%d %d", &L, &N);

    int cake[1001] = { 0 };
    int getCake[1001] = { 0 };

    int maxIndex = 0;  // 가장 많은 조각을 받을 것으로 기대한 방청객
    int maxCake = 0;   // 실제로 가장 많은 조각을 받은 방청객

    int maxExpectedPieces = 0; // 가장 많은 조각을 받을 것으로 기대하는 조각 수

    for (int i = 1; i <= N; i++) {
        int start, end;
        scanf("%d %d", &start, &end);

        int expectedPieces = end - start + 1;  // 방청객이 기대한 조각 수

        // 롤케이크를 실제로 분배하고 결과 계산
        for (int j = start; j <= end; j++) {
            if (cake[j] == 0) {  // 아직 나눠지지 않은 조각인 경우
                getCake[i]++;   // 방청객 i가 조각을 받음
                cake[j] = 1;    // 조각을 나눴음을 표시
            }
        }

        // 가장 많은 조각을 받을 것으로 기대한 방청객 업데이트
        if (expectedPieces > maxExpectedPieces) {
            maxExpectedPieces = expectedPieces;
            maxIndex = i;
        }
    }

    // 실제로 가장 많은 조각을 받은 방청객 업데이트
    for (int i = 1; i <= N; i++) {
        if (maxCake < getCake[i]) {
            maxCake = getCake[i];
        }
    }

    // 가장 많은 조각을 받을 것으로 기대하고 있던 방청객 출력
    printf("%d\n", maxIndex);

    // 실제로 가장 많은 조각을 받은 방청객 출력
    for (int i = 1; i <= N; i++) {
        if (maxCake == getCake[i]) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
