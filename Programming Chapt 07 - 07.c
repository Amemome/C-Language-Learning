#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int num = 7;

	for (int i = 1; i <= num ; ++i) {

		for (int a = 0; a < num - i; ++a) {
			printf(" ");
		}
		for (int b = 0; b < i; ++b) {
			printf("*");
		}
		printf("\n");
	}
}