#include <stdio.h>
int A[100000];

int B[100000];

void quick_sort(int Array[], int size) {
	q_sort(Array, 0, size -1);
}

void q_sort(int Array[], int left, int right) {
	int l_hold, r_hold, pivot, temp;
	
	pivot = Array[(left+right)/2];
	l_hold = left;
	r_hold = right;
	do {
		while(Array[l_hold] < pivot)
			l_hold++;
		
		while(Array[r_hold] > pivot)
			r_hold--;
			
		if(l_hold <= r_hold) {
			temp = Array[l_hold];
			Array[l_hold] = Array[r_hold];
			Array[r_hold] = temp;
			l_hold++;
			r_hold--;
		}
	} while(l_hold < r_hold);
		
		if(left < r_hold) 
			q_sort(Array, left, r_hold);
		
		if(l_hold < right)
			q_sort(Array, l_hold, right);
}
int main(int argc, char* argv[]) {
	
	int num, num1, i;
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &A[i]);
	}
	
	scanf("%d", &num1);
	
	for(i = 0; i < num1; i++) {
		scanf("%d", &B[i]);
	}
	
	quick_sort(A, num);
	
	
	for(i = 0; i < num1; i++) {
		
		int j = binary_search(A, B[i]);
		printf("%d\n", j);
	}
	return 0;
}

int binary_search(int A[], int num) {
	int left, right;
	left = 0;
	right = num-1;
	while(left <= right) {
		int mid = (left + right) /2;
		
		if(A[mid] > num) {
			right = mid -1;
		}
		
		else if(A[mid] < num) {
			left = mid +1;
		}
		
		else {
			return 1;
		}
	}
	return 0;
}
