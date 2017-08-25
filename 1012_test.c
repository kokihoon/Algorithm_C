#include <stdio.h>

int v[51][51] = {0, };

int main() {
	
	int N, a, b, c, i, j, count = 0;
	
	scanf("%d", &N);
	
	while(N--) {
		scanf("%d %d %d", &a, &b, &c);
		while(c--) {
			scanf("%d %d", &i, &j);
			v[i][j] = 1;
		}
		i = 0,j = 0;
		
		for(i =0; i <= 50; i++) {
			for(j = 0; j <= 50; j++) {
				if(v[i][j] == 1) {
					curcle(i, j);
					count++;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}

void curcle(int i, int j) {
	
	if(v[i][j] == 1 && i >= 0 && j >= 0) { 
		v[i][j] = 0;
		curcle(i, j+1);
		curcle(i+1, j);
		curcle(i-1, j);
		curcle(i, j-1);
	}
} 
