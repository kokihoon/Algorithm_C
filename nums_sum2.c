#include <stdio.h>
#include <stdlib.h>

int A[10000];

int main(int argc, char *argv[]) {
	
	int size, sum, i, num_sum = 0, count = 0, cou = 0;
	scanf("%d %d", &size, &sum);
	
	for(i = 0; i < size; i++) {
		scanf("%d", &A[i]);
	}
	while(count < size) {
		for(i = count; i < size; i++) {
			num_sum += A[i];
			if(num_sum == sum) {
				cou++;
				break;
			}		
			if(num_sum > sum) {
				break;
			}	
		}
		num_sum = 0;
		count++;
	}
	printf("%d\n", cou);
	return 0;
}
