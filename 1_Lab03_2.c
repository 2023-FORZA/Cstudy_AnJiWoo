# include <stdio.h>

int main() {
	int year;
	scanf("%d",&year);

	if (year >= 1 && year <= 4000)
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 00)
			printf("%d", 1);
		else
			printf("%d", 0);
	
	return 0;
}
