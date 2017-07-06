#include <stdio.h>
#define SIZE 10000

int N[SIZE];

int main() {
	int NUM, M, i, j = 0, sum = 0, count = 0;
	
	scanf("%d %d", &NUM, &M);
	
	for(i = 0; i < NUM; i++) {
		scanf("%d", &N[i]);
	}
	i = 0;
	j = i;
	while(i < NUM) {
		if(sum == M) {
			count++;
			sum = 0;
			j = ++i;
		}
		else if(sum > M) {
			j = ++i;
			sum = 0;			
		}
		else{
			if(j < NUM)
				sum += N[j++];
			else{
				j = ++i;
				sum = 0;
			}
				
		}
	}
	printf("%d\n", count);
	return 0;
}
