#include <stdio.h>

int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int isSymmetric(int n) {
    int reversed = reverse(n);
    return n + reversed == reverse(n + reversed);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        if (isSymmetric(N))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
