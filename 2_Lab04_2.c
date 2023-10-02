#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char line[210]; // 입력 버퍼 크기

    while (1) {
        fgets(line, sizeof(line), stdin);

        // 별표(*)가 입력되면 프로그램 종료
        if (line[0] == '*') {
            break;
        }

        bool isPangram = true;
        int alphabetCount[26] = { 0 }; // 알파벳 등장 횟수를 저장하는 배열

        int len = strlen(line);

        for (int i = 0; i < len; i++) {
            char ch = line[i];

            if ('a' <= ch && ch <= 'z') {
                int index = ch - 'a';
                alphabetCount[index]++;
            }
        }

        // 알파벳 중복 확인
        for (int i = 0; i < 26; i++) {
            if (alphabetCount[i] == 0) {
                isPangram = false;
                break;
            }
        }

        if (isPangram) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}
