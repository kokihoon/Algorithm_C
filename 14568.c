#include <stdio.h>

int NM[500][500];
char* itoa1(int val, char * buf, int radix);
int main() {
	int n,m, i, j, count = 0, k, max_col = 0, max_row = 0, row1, col1;
	char buffer[5] = {'0', };
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			scanf("%d", &NM[i][j]);	
		}
	}

	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			itoa1(NM[i][j], buffer, 10);
			for(k = 0; k < 5; k++) {
				if(buffer[k] == '9') {
					count++;
				}
			}
			for(k = 0; k < 5; k++) {
				buffer[k] = '0';
			}
		}
		if(max_row == 0) {
			max_row = count;
			row1 = i;
		}
		else {
			if(max_row < count) {
				max_row = count;
				row1 = i;
			}
		}
		count = 0;
	}
	
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			itoa1(NM[j][i], buffer, 10);
			for(k = 0; k < 5; k++) {
				if(buffer[k] == '9') {
					count++;
				}
			}
			for(k = 0; k < 5; k++) {
				buffer[k] = '0';
			}
		}
		if(max_col == 0) {
			max_col = count;
			col1 = i;
		}
		else {
			if(max_col < count) {
				max_col = count;
				col1 = i;
			}
		}
		count = 0;
	}
	if(max_row > max_col) {
		for(j = 0; j < m; j++) {
			NM[row1][j] = 0;	
		}
	}
	else {
		for(j = 0; j < n; j++) {
			NM[j][col1] = 0;	
		}
	}
	count = 0;
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			itoa1(NM[i][j], buffer, 10);
			for(k = 0; k < 5; k++) {
				if(buffer[k] == '9') {
					count++;
				}
			}
			for(k = 0; k < 5; k++) {
				buffer[k] = '0';
			}
		}
	}
	printf("%d\n", count);
}

char* itoa1(int val, char * buf, int radix) {

	char* p = buf;

	while(val) {

		if(radix <= 10)
			*p++ = (val % radix) + '0';

		else {
			int t = val % radix;
			if (t <= 9)
				*p++ = t + '0';
			else
				*p++ = t - 10 + 'a';
		}

		val /= radix;
	}

	*p = '\0';
	//reverse(buf);

	return buf;
}
