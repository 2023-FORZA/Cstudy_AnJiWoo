#include <stdio.h>
#include <string.h>

int count = 0; // count 명시적 초기화

int recursion(const char* s, int l, int r) {
	++count;
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else
		return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {

	count = 0;
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int t;
	scanf("%d", &t);

	while (t-- > 0) {

		char s[1001];
		scanf("%s", s);

		int result = isPalindrome(s);
		printf("%d %d\n", result, count);
	}
}
