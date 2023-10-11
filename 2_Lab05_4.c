#include<stdio.h>

int dice[7];

int main(void) {
	int i, j, N, a, b, c, d, prize, maxP, max = 0, TT, T;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		TT = 0; T = 0; prize = 0; maxP = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		dice[a]++; dice[b]++; dice[c]++; dice[d]++; // 숫자가 몇번나왔는지 체크 
		for (j = 1; j <= 6; j++) { // 1면 ~ 6면까지 
			if (dice[j] == 4) { // 네번나왔을경우
				prize = (50000 + (j) * 5000);
			}
			else if (dice[j] == 3) { //세번 나왔을경우
				prize = (10000 + (j) * 1000);
			}
			else if (dice[j] == 2) { // 두번 나왔을경우
				if (TT == 0) { //처음일때
					prize = 1000 + (j * 100);
					TT++; // 횟수한번올리고
					T = j; // j 저장 
				}
				else if (TT == 1) { //두번째일때 
					prize = 2000 + (T * 500) + (j * 500);
				}
			}
			if ((dice[j] != 0) && (j > maxP)) maxP = j; // 가장 큰 눈
			dice[j] = 0; //주사위 초기화 
		}
		if (prize == 0)
			prize = maxP * 100;
		if (prize > max)
			max = prize;
	}
	printf("%d", max);
}