#include <stdio.h>
int d(int n) {
    if (n >= 1000)
        return n + n % 10 + (n % 100) / 10 + (n % 1000) / 100 + (n % 10000) / 1000;
    else if (n >= 100)
        return n + n % 10 + (n % 100) / 10 + (n % 1000) / 100;
    else if (n >= 10)
        return n + n % 10 + (n % 100) / 10;
    else
        return 2 * n;
}
int main() {
    int ary[10036] = { 0 };
    for (int i = 1; i < 10000; i++)
        ary[d(i)] = 1;
    for (int i = 1; i < 10000; i++)
        if (ary[i] == 0)
            printf("%d\n", i);
