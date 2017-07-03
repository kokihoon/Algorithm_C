#include <stdio.h>

int main() {
	int i,j, N;
	
	scanf("%d", &N);
	
	for(i =0; i < N-1; i++) {
		for(j = 0; j < i + 1; j++) {
			printf("*");
		}
		for(j = i+1; j < N-1; j++) {
			printf(" ");
		}
		for(j = N; j < 2*N-i; j++) {
			printf(" ");
		}
		for(j = 2*N-i; j < 2*N+1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for(i = 0; i < 2*N; i++) {
		printf("*");
	}
	printf("\n");
	for(i = 0; i < N-1; i++) {
		for(j = 0; j < N-i-1; j++) {
			printf("*");			
		}
		for(j = N-i-1; j < N; j++) {
			printf(" ");
		}
		for(j = N; j < N+i+1; j++) {
			printf(" ");
		}
		for(j = N+i+1; j < 2*N; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
} 
