#include <stdio.h>

int main() {
	int i, count, j, k;
	
	scanf("%d", &count);
	k = count-1;
	for(i = 0; i < count; i++) {
		for(j = 0; j < count; j++) {
			if(j >= k) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		k--;
		printf("\n");
	}
	return 0;
}
