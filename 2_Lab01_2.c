#include <stdio.h>
#include <string.h>

int main() {
    int max = 0;
    int same = 0;
    int num = 0;
    char a[1000000];
    int arr[26] = { 0 }; // 알파벳 빈도수를 저장하는 배열 초기화

    scanf("%s", a);
    int n = strlen(a);

    for (int i = 0; i < n; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            arr[a[i] - 'A']++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z') {
            arr[a[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max < arr[i]) {
            max = arr[i];
            num = i;
            same = 0; // max 값이 바뀌면 같은 빈도수 카운트 초기화
        }
        else if (max == arr[i]) {
            same++;
        }
    }

    if (same >= 1) {
        printf("?");
    }
    else {
        printf("%c", 'A' + num);
    }

    return 0;
}
