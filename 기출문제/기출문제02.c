#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 수강 대상자 수를 구하는 함수 고치기
int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++)
		// scores[i] 요소의 값이 650 이상 이면서 800미만
		if (650 <= scores[i] || scores[i] < 800)
			count += 1;
	return count;
}

void main() {
	int ans;
	int scores[] = { 600, 900,780,660,800,600,500,720,860,700 };
	int len = sizeof(scores) / sizeof(scores[0]);
	ans = solution(scores, len);
	printf("%d", ans);
}