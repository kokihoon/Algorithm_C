#include <stdio.h>

int NM[100][100];
int stack[100];

int main() { 
	int a, b, i, j, n, t = 0, count = 0, x, k;
	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &a, &b);
	
		for(i = 0; i < a; i++) {
			for(j = 0; j < b; j++) {
				scanf("%d", &NM[i][j]);
			}
		}
		
		for(i = 0; i < b; i++) {
			for(j = a-1; j >= 0; j--) {
				stack[t++] = NM[j][i];
			}
			t =0;

			while(1) {
				if(stack[t] == 0){
					t += 1;
				}
				else {
					if(stack[t] == 1 && t == 0) {
						t+=1;
					}
					else if (stack[t] == 1) {
						if(stack[t-1] == 1){
							t +=1;
						}
						else {
							stack[t-1] = 1;
							stack[t] = 0;
							t -= 1;
							count++;
						}
					}
				}
				if(t == a){
					break;
				}
			}
			t =0;
		}
		
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}
