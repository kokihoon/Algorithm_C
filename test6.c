#include <stdio.h>
int a[100] = {0, };

int main(int argc, char* argv[]) {
	
	long N, M, sum = 0, sum1 = 0;
	int i, j, k;
	scanf("%d %d", &N, &M);
	while(M < 10 && M > 3000000) {
		scanf("%d", &M);		
	}
	for(i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		if(a[i] > 100000) {
			i--;
		}
	}
	
	sum1 = a[0] + a[1] + a[2];
	
	for(i = 0; i < N - 2; i++) {
		sum = a[i];
		for(j = i + 1; j < N -1; j++) {
			sum +=a[j];
			for(k = j + 1; k < N; k++) {
				sum += a[k];
				if(sum1 <= M) {
					if(sum1 < sum && sum <= M) {
						sum1 = sum;		
					}
				}
				else {
					sum1 = sum;
				}
				sum -= a[k];
			}
			sum -= a[j];
		}
		sum = 0;
	}	
	if(sum1 > M) {
		return 1;
	}
	else {
		printf("%d\n", sum1);
		return  0;
	}	
}
