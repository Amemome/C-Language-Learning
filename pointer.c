#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inc(int *counter);

int main() {

	int i = 10;

	printf("함수호출전 %d", i);
	inc(&i);        
	printf("함후소출후 %d", i);
	return 0;
}
void inc(int *counter) {
	(*counter)++;
	
}