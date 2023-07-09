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
        results[i] = (char*)malloc(81 * sizeof(char));  // �ִ� ���̴� 80������ �� ���� ����Ͽ� 81 �Ҵ�
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
