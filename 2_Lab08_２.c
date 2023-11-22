#include <stdio.h>

int main(void)
{
	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == -1) break;
		if (n != 6 && n != 28 && n != 496 && n != 8128)
			printf("%d is NOT perfect.\n", n);
		else
		{
			printf("%d = 1", n);
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0) printf(" + %d", i);
			}
			printf("\n");
		}
	}
}