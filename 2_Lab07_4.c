#include <stdio.h>

int main() {
    int count = 0;
    int N;
    scanf("%d", &N);
    int x, y;
    scanf("%d %d", &x, &y);

    if (N == 1) {
        count = 0;
    }
    else if ((x == 1 && y == 1) || (x == N && y == 1) || (x == 1 && y == N) || (x == N && y == N)) {

        count = 2;
    }
    else if (x == 1 || x == N || y == 1 || y == N) {
        count = 3;
    }
    else {
        count = 4;
    }

    printf("%d", count);

    return 0;
}
