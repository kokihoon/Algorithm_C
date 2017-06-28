#include <stdio.h>

int main() {
	int i, count,j, k;
	k = 0;
	scanf("%d", &count);
	for(i = 0; i < count; i++) {
		for(j = 0; j < count; j++) {
			if(k <= j)
				printf("*");
			else
				printf(" ");
		}
		k++;
		printf("\n");
	}
	return 0;
}
