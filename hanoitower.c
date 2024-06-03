#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hatower(int n, char from, char temp, char to);       //from 에서 to 옮기고자 하는 원판이 n 개 있다. 
int main() {											  //temp 는 나머지 하나의  막대기로, from 과 to 로 옮기기 위한 막대기이다.
	hatower(5, 'A', 'B', 'C');  //5개의 원판과 A,B,C 3개의 막대기를 인자로 전달.
}
void hatower(int n, char from, char temp, char to) { //n 번째 원판.. 밑에서 부터 1 2 3 4.... 순으로
	if (n == 1) {                                   //from 원판 쌓여있는 곳, to 원판을 옮길 곳, tmp 중간의 임시
		printf("원판 1을 %c 에서 %c 으로 옮긴다.\n", from, to);  //n에서 n-1 을 하며 내려 올 떄 1이면 1을 옮김. 
	}															 //점화식으로 쳤을때 a1 과 같은 역할.
	else {                     //1이 아니면 실행
		hatower(n - 1, from, to, temp); //n-1 개를 from 에서 temp 로 옮김.

		printf("원판 %d를 %c 에서 %c 으로 옮긴다.\n", n, from, to); //원판을 from 에서 to 로 옮긴다.

		hatower(n - 1, temp, from, to); //n-1 개를 temp 에서 to 로 옮김.
	}
}