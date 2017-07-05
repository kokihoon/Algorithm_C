#include <stdio.h>

int LOTTE[50];
int cou[50];

int main() {
	
	int N, N1, i;
	
	while(scanf("%d", &N)) {
		if(N == 0)
			break;
		for(i =0; i < N; i++) {
			scanf("%d", &LOTTE[i]);
		}
		
		for(i = 0; i < N; i++) {
			if(i < 6) {
				cou[i] = 0;
			}
			else
 				cou[i] = 1;

		}
		do {
			for(i =0; i < N; i++) {
				if(cou[i] == 0)
					printf("%d ", LOTTE[i]);
			}
			printf("\n");	
		}while(next_permutation(cou,N));
		printf("\n");
	}
	
	return 0;
}

int next_permutation(int a[], int n) {
	int i = n-1;
	int temp;
	while(i > 0 && a[i-1] >= a[i]) i -= 1;
	if(i <= 0) return 0;
	int j = n-1;
	while(a[j] <= a[i-1]) j-= 1;
	temp = a[i-1];
	a[i-1] = a[j];
	a[j] = temp;
	j = n-1;
	while(i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i+=1;
		j-=1;
	}
	return 1;
}
