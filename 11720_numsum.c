#include <stdio.h>

int main() {
	
 	int num[100], i, count, sum = 0; 
	scanf("%d", &count);
	
	for(i = 0; i < count; i++){
		scanf("%1d", &num[i]);
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}
