#include <stdio.h>
int f(int n, int k)
{
    if (k == n) return 1;
    else if (k == 1) return n;
    else return f(n - 1, k - 1) + f(n - 1, k);
}

void main() {
	int num, n, r;
	
	scanf("%d", &num);
	
	while(num--) {
		scanf("%d %d", &n, &r);
		printf("%d\n", f(r, n));
	}
}
