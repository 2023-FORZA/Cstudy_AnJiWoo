#include <stdio.h>

int main(void) {
    int n, sec, youngcost = 0, mincost = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sec);
        youngcost += (sec / 30 + 1) * 10; // 30À¸·Î ³ª´« ¸ò¿¡ +1
        mincost += (sec / 60 + 1) * 15; // 60À¸·Î ³ª´« ¸ò¿¡ +1
    }

    if (mincost < youngcost) printf("M %d", mincost);
    else if (youngcost < mincost) printf("Y %d", youngcost);
    else printf("Y M %d", mincost);
    return 0;
}
