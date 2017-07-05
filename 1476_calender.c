#include <stdio.h>

int count = 0;
int main(){
	int E, S, M, count = 0, E1=1, S1=1, M1=1;
	scanf("%d %d %d", &E, &S, &M);
	
	while(1) {
		count++;
		if(E1 == 16) E1 = 1;
		if(S1 == 29) S1 = 1;
		if(M1 == 20) M1 = 1;
		if(E == E1 && S == S1 && M == M1) {
			break;
		}
		E1++;
		S1++;
		M1++;
	}
	printf("%d\n", count);
	return 0;
}
