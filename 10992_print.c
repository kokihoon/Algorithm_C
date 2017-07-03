#include <stdio.h>

int main() {
	
	int N, i, j, left, right;
	char ch = '*';
	char bean = ' ';
	scanf("%d", &N);
	for(i = 0; i <N; i++) {
		for(j = 0; j < 2*N-1; j++ ) {
			if(i == 0) {
				if(j == N-1) {
					printf("%c\n", ch);
				
					break;
				}
				else
					printf("%c", bean);
			}
			else if(i > 0 && i < N-1) {
				left = N-1- i;
				right = N-2 + i;
				if(left == j) {
					printf("%c", ch);
				}
				if(right == j) {
					printf("%c\n", ch);
					break;
				}
				else
					printf("%c", bean);
			}
			else if(i == N-1) {
				printf("%c", ch);
			}
		}
	}
	return 0;
}
