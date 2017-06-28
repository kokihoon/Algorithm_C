#include <stdio.h>

int main() {
	
	long i, max, min, num, count;
	scanf("%ld", &count);
	
	for(i = 0; i < count; i++) {
		scanf("%ld", &num);
		if(i == 0) {
			max = num;
			min = num;
		}
		if(max < num) {
			max = num;
		}
		if(min > num) {
			min = num;
		}
	}
	
	printf("%ld %ld", min, max);
	return 0;
}
