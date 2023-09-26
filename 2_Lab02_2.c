#include <stdio.h>

int main() {
    int n; // ���� ��
    scanf("%d", &n);

    char subject[101]; // ����� (���ڿ�)
    int credit; // ����
    char grade[3]; // ���� (���ڿ�)

    double totalScore = 0.0; // �� ���� * ����
    int totalCredit = 0; // �� ����

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", subject, &credit, grade);
        double score = 0.0;

        // ������ ���� ���� ���
        if (grade[0] == 'A') {
            if (grade[1] == '+') {
                score = 4.3;
            }
            else if (grade[1] == '0') {
                score = 4.0;
            }
            else if (grade[1] == '-') {
                score = 3.7;
            }
        }
        else if (grade[0] == 'B') {
            if (grade[1] == '+') {
                score = 3.3;
            }
            else if (grade[1] == '0') {
                score = 3.0;
            }
            else if (grade[1] == '-') {
                score = 2.7;
            }
        }
        else if (grade[0] == 'C') {
            if (grade[1] == '+') {
                score = 2.3;
            }
            else if (grade[1] == '0') {
                score = 2.0;
            }
            else if (grade[1] == '-') {
                score = 1.7;
            }
        }
        else if (grade[0] == 'D') {
            if (grade[1] == '+') {
                score = 1.3;
            }
            else if (grade[1] == '0') {
                score = 1.0;
            }
            else if (grade[1] == '-') {
                score = 0.7;
            }
        }
        else if (grade[0] == 'F') {
            score = 0.0;
        }

        totalScore += credit * score;
        totalCredit += credit;
    }

    double average = totalScore / totalCredit;

    // ��� ������ �Ҽ��� ��° �ڸ����� �ݿø��ؼ� ��° �ڸ����� ���
    printf("%.2lf\n", round(average * 100) / 100);

    return 0;
}
