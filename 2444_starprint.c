#include <stdio.h>

int main() {
	int i, N, j,left, right, k;
	scanf("%d", &N);
	for(i =0; i < N; i++) {
		for(j = 0;j < N-1-i; j++) {
			printf(" ");
		}
		for(k = N-1-i; k < N; k++) {
			printf("*");		
		}
		for(k = N; k < N + i; k++){
			printf("*");
		}
		
 	printf("\n");
	}
	for(i =N-2; i > -1; i--) {
		for(j = 0;j < N-1-i; j++) {
			printf(" ");
		}
		for(k = N-1-i; k < N; k++) {
			printf("*");		
		}
		for(k = N; k < N + i; k++){
			printf("*");
		}
		
 	printf("\n");
	}

	return 0;
}
