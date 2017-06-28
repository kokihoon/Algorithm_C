#include <stdio.h>

int main() {
	int i, count,j;

	scanf("%d", &count);
	for(i = count; i > 0; i--) {
		for(j = i; j > 0; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
