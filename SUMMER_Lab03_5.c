#include <stdio.h>

int main()
{
    int T, N, K;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &K);
        int friends = 0;

        for (int j = 0; j < N; j++)
        {
            int candy;
            scanf("%d", &candy);
            friends += candy / K;
        }
        printf("%d\n", friends);
    }

    return 0;
}
