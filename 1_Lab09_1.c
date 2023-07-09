#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateScore(char* result) {
    int score = 0;
    int consecutive = 0;
    int length = strlen(result);

    for (int i = 0; i < length; i++) {
        if (result[i] == 'O') {
            consecutive++;
            score += consecutive;
        }
        else {
            consecutive = 0;
        }
    }

    return score;
}

int main() {
    int testCases;
    scanf("%d", &testCases);

    char** results = (char**)malloc(testCases * sizeof(char*));
    for (int i = 0; i < testCases; i++) {
        results[i] = (char*)malloc(81 * sizeof(char));  // 최대 길이는 80이지만 널 문자 고려하여 81 할당
        scanf("%s", results[i]);
    }

    for (int i = 0; i < testCases; i++) {
        int score = calculateScore(results[i]);
        printf("%d\n", score);
        free(results[i]);
    }

    free(results);

    return 0;
}
