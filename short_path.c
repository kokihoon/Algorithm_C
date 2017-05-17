#include <stdio.h>

long V[20000];
long E[2000][2000] = {0, };
long dist[20000];
long near[20000] = {0, };

int main(int argc, char* argv[]) {
	long num, start, i, v, k, weight, min = 1000, l = 0, j;
	long num1;
	scanf("%ld %ld", &num, &num1);
	scanf("%ld", &start);
	
	for(i = 0; i < num1; i++) {
		scanf("%ld %ld %ld", &v, &k, &weight);
		E[v-1][k-1] = weight;
	}
	
	for(i = 0; i < num; i++) {
		for(i = 0; i < num; i++) {
			dist[i] = E[start-1][i];
			near[i] = start;		
			if(dist[i] == 0 && (start -1 != i)) {
				dist[i] = 9999;
				near[i] = 0;
			}
			else if(dist[i] == 0 && start-1 == i) {
				near[i] = -1;
			}
			else if(dist[i] != 9999) {
				min = dist[i];
			}
		}
	}

	l = num;
	while(l-- > 0) {
		for(i = 0; i < num; i++) {
			if((near[i] == 1) && (min > dist[i])) {
				min = dist[i];
				v = i;
			}
		}
		near[v] = -1;
		for(i = 0; i < num; i++) {
			if(near[i] != -1 && E[v][i] != 0 && dist[i] > min + E[v][i]) {
				dist[i] = min + E[v][i];
				k = i;
			}
		}
		min = dist[k];
	}

	for(i = 0; i < num; i++) {
		if(dist[i] == 9999) {
			printf("INF\n");
		}
		else{
			printf("%ld\n", dist[i]);
		}
	}
	return 0;
}
