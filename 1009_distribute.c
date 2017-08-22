#include <stdio.h>

int main() {
	
	int N, A, B;

	scanf("%d", &N);
	
	while(N--) {
		scanf("%d %d", &A, &B);
		printf("%d\n", pow1(A, B));
	}
	return 0;
}

int pow1(int A, int B) {
	int C = 1;
	while(B--) {
		
		C = A * C;
		C = C %10;
	}
	if(C == 0) {
		return 10;
	}
	
	return C;
}
