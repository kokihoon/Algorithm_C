#include <stdio.h>

int main() {
	
	int i, N, j, left, right;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		for(j = 0; j < 2*N-1; j++) {
			if(i == 0) {
				if(j == N-1) {
					printf("*\n");
					break;
				}
				else
					printf(" ");
			}
			else if(i > 0 && i < N-1) {
				left = N-1- i;
				right = N-2 + i;
				if(left == j) {
					printf("*");
				}
				else if(right == j) {
					printf("*\n");
					break;
				}
				else if(left < j) {
					if(i % 2 == 1) {
						if(j % 2 == 0) {
							printf("*");
						}
						else {
							printf(" ");
						}
					}
					else {
						if(j % 2 == 1) {
							printf(" ");
						}
						else {
							printf("*");
						}
					}
				}
				else
					printf(" ");
			}
			else if(i == N-1) {
				if(j % 2 == 0) {
					printf("*");
				}
				else 
					printf(" ");
			}
		}
	}
	return 0;
}
