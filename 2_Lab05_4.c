#include<stdio.h>

int dice[7];

int main(void) {
	int i, j, N, a, b, c, d, prize, maxP, max = 0, TT, T;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		TT = 0; T = 0; prize = 0; maxP = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		dice[a]++; dice[b]++; dice[c]++; dice[d]++; // ���ڰ� ������Դ��� üũ 
		for (j = 1; j <= 6; j++) { // 1�� ~ 6����� 
			if (dice[j] == 4) { // �׹����������
				prize = (50000 + (j) * 5000);
			}
			else if (dice[j] == 3) { //���� ���������
				prize = (10000 + (j) * 1000);
			}
			else if (dice[j] == 2) { // �ι� ���������
				if (TT == 0) { //ó���϶�
					prize = 1000 + (j * 100);
					TT++; // Ƚ���ѹ��ø���
					T = j; // j ���� 
				}
				else if (TT == 1) { //�ι�°�϶� 
					prize = 2000 + (T * 500) + (j * 500);
				}
			}
			if ((dice[j] != 0) && (j > maxP)) maxP = j; // ���� ū ��
			dice[j] = 0; //�ֻ��� �ʱ�ȭ 
		}
		if (prize == 0)
			prize = maxP * 100;
		if (prize > max)
			max = prize;
	}
	printf("%d", max);
}