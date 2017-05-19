#include <stdio.h>

int N[100000];

int main(int argc, char* argv[]) {
	int num, i, sum = 0, max = 0;
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &N[i]);
	}
	sum = N[0];
	max = sum;
	for(i = 1; i < num; i++) {
		sum += N[i];
		if(max < sum) {
			if(max > 0) {
				if(sum > 0)
					max = sum;
				else 
					max = N[i];
					sum = max;
			}
			else {
				max = N[i];
				sum = max;
			}
		}
		else 
			if(sum > 0){
				
			}
				
			else
				if(max > sum) {
					if(max > N[i]) {
						sum = 0;

					}
					else {
						max = N[i];
					}
				}
				else
 					max = N[i];
		
	}
	printf("%d\n", max);
	
	return 0;
}
