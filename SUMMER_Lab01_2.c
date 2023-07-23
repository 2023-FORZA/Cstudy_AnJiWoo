#include<stdio.h>

int main(void) {
    int x, y, w, h, d1, d2, min;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if (x < w - x)d1 = x;
    else d1 = w - x;
    if (y < h - y)d2 = y;
    else d2 = h - y;
    if (d1 < d2)min = d1;
    else min = d2;
    printf("%d\n", min);
}