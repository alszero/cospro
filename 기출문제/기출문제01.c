#include<stdio.h>
int func_a(int month, int day) {
	int month_list[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total = 0;
	for (int i = 0; i < month - 1; i++)
		total += month_list[i];
		total += day;
		return total - 1;
}
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day);
	int end_total = func_a(end_month, end_day);
	return end_total - start_total;
}

void main() {
	int start_month = 2;
	int start_day = 10;
	int end_month = 8;
	int end_day = 6;
	int result = solution(start_month, start_day, end_month, end_day);
	printf("%d \n", result);
}