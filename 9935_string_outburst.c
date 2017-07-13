#include<stdio.h>
#include <string.h>
#define MAXSIZE 1000001
char Stack[MAXSIZE];
char inputString[MAXSIZE];
char outburst[37];

int top = -1;

int push(char ch) {
	if(top >= MAXSIZE -1) {
		return -1;
	}
	Stack[++top] = ch;
	return 0;
}
int pop() {
	if(top < 0) {
		return -1;
	}
	return Stack[top--];
}
int main() {
	int i, burst_count = 0, num_count = 0, String_count = 0, j = 0;

	gets(inputString);
	gets(outburst);
	burst_count = strlen(outburst);
	String_count = strlen(inputString);

	for(i = 0; i<=String_count; i++) {
		if(strncmp(Stack + j - burst_count, outburst, burst_count) == 0) j -= burst_count;
		Stack[j++] = inputString[i];
	}
	
	if(!Stack[0]) puts("FRULA");
	else puts(Stack);
//	num_count = burst_count-1;
//	for(i = 0; i < String_count; i++) {
//		push(inputString[i]);
//		while(outburst[burst_count-1] == Stack[top]) {
//			if(burst_count-1 == 0) {
//				top--;
//				break;
//			}
//			if(outburst[--num_count] == Stack[--top]) {
//				if(num_count == 0) {
//					top--;
//					num_count = burst_count-1;
//					break;
//				}
//			}
//			else {
//				num_count = burst_count-1;
//				top = i;
//			}
//		}
//	}
	return 0;
}
