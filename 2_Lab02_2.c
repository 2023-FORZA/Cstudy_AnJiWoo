#include <stdio.h>

int main() {
    int n; // 과목 수
    scanf("%d", &n);

    char subject[101]; // 과목명 (문자열)
    int credit; // 학점
    char grade[3]; // 성적 (문자열)

    double totalScore = 0.0; // 총 학점 * 성적
    int totalCredit = 0; // 총 학점

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", subject, &credit, grade);
        double score = 0.0;

        // 성적에 따라 점수 계산
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

    // 평균 평점을 소수점 셋째 자리에서 반올림해서 둘째 자리까지 출력
    printf("%.2lf\n", round(average * 100) / 100);

    return 0;
}
