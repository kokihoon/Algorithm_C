#include <stdio.h>

long stack[10000] = {0, };
int count = 0;
int j = 0, k;
long print[100]= {0, };
void push_1(int push);
int pop();
int empty();

int main(int argc, char* argv[]) {
	int num, i, lr;
	char s[4];
	scanf("%d", &num);

	for(i = 0;i < num; i++) {
		scanf("%s", s);
		if(!strcmp(s,"push")) {
			scanf("%d", &lr);
			push_1(lr);
		}
		else if(!strcmp(s,"pop")) {
			print[j++] = pop();
		}
		else if(!strcmp(s,"size")) {
			print[j++] = count;
		}
		
		else if(!strcmp(s,"empty")) {
			print[j++] = empty();
		}
		
		else if(!strcmp(s,"top")) {
			if(count == 0) {
				print[j++] = -1;
			}
			else {
				print[j++] = stack[count-1];
			}
		}
	}
	k = j;
	k = 0;
	for(i =0; i< j; i++) {
		printf("%d\n", print[k++]);
	}
	return 0;
}
int empty() {
	if(count == 0) {
		return 1;
	}
	else {	
		return 0;
	}
}
int pop() {
	int num = -1;
	if(count != 0) {
		num = stack[--count];
		stack[count] = 0;
	}
	return num;
}
void push_1(int push) {	
	stack[count++] = push;
}

