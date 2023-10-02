#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char line[210]; // �Է� ���� ũ��

    while (1) {
        fgets(line, sizeof(line), stdin);

        // ��ǥ(*)�� �ԷµǸ� ���α׷� ����
        if (line[0] == '*') {
            break;
        }

        bool isPangram = true;
        int alphabetCount[26] = { 0 }; // ���ĺ� ���� Ƚ���� �����ϴ� �迭

        int len = strlen(line);

        for (int i = 0; i < len; i++) {
            char ch = line[i];

            if ('a' <= ch && ch <= 'z') {
                int index = ch - 'a';
                alphabetCount[index]++;
            }
        }

        // ���ĺ� �ߺ� Ȯ��
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
