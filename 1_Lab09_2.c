#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateSum(int* numbers, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    int* numbers = (int*)malloc(N * sizeof(int));
    char* input = (char*)malloc((N + 1) * sizeof(char));
    scanf("%s", input);

    for (int i = 0; i < N; i++) {
        numbers[i] = input[i] - '0';
    }

    int sum = calculateSum(numbers, N);
    printf("%d\n", sum);

    free(numbers);
    free(input);

    return 0;
}
