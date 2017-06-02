#include <stdio.h>

int main(int argc, char* argv[]) {

	int R, C, A, B;
	int i, j, k, l;
	int flag = 1;
	scanf("%d %d", &R, &C);
	scanf("%d %d", &A, &B);
	for(i = 0; i < R; i++) {
		for(k = 0; k < A; k++) {
			for(j = 0; j < C; j++) {
				for(l = 0; l < B; l++) {
					if(flag == 1)
						printf("X");
					else
						printf(".");
				}
			
				if(flag == 1)
					flag = 0;
				else
					flag = 1;
			}	
			printf("\n");
			if(C % 2== 0) {	
				if(flag == 1)
					flag = 1;
				else
					flag = 0;
			}
			else {
				if(flag == 1)
					flag = 0;
				else
					flag = 1;
			}
		
		}
		if(A % 2== 0) {	
			if(flag == 1)
				flag = 0;
			else
				flag = 1;
		}
		else {
			if(flag == 1)
				flag = 0;
			else
				flag = 1;
		}
	}
	return 0;
}
