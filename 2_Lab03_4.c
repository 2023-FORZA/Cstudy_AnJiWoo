#include <stdio.h>

int findmaxscore(int arr[], int n) {
	int maxscore = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[maxscore]) {
			maxscore = i;
		}
	}
	return maxscore; // 최댓값의 인덱스 반환
}

int main(void) {
	int w_score[10];
	int k_score[10];

	for (int i = 0; i < 10; i++) { // w대학 점수입력
		scanf("%d", &w_score[i]);
	}

	for (int i = 0; i < 10; i++) { //k대학 점수 입력
		scanf("%d", &k_score[i]);
	}
	// 상위 3개 값 합산
	int w_total = 0;
	int k_total = 0;
	for (int i = 0; i < 3; i++) {
		int maxscoreW = findmaxscore(w_score, 10);
		int maxscoreK = findmaxscore(k_score, 10);

		w_total += w_score[maxscoreW];
		k_total += k_score[maxscoreK];

		w_score[maxscoreW] = -1;
		k_score[maxscoreK] = -1;
	}

	printf("%d %d\n", w_total, k_total);

	return 0;
}
