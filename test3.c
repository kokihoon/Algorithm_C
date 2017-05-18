#include <stdio.h>

int main(int argc, char* argv[]) {
	int up, down, length;
	
	scanf("%d %d %d", &up, &down, &length);
	
	printf("%d", day_count(up, down, length));
	return 0;
}

int day_count(int up, int down, int length) {
	int count = 0;
	int a = up;

	count++;
	while(a < length) {
		a -=down;
		
		a += up;
		count++;
	}
	return count;
}
