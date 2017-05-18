#include <stdio.h>

long my_card[500000];
long table_card[500000];

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
	
	long i, num, num1, left, right;
	scanf("%ld", &num);
	
	for(i = 0; i< num; i++) { 
		scanf("%ld", &my_card[i]);
	}
	
	scanf("%ld", &num1);
	
	for(i = 0; i < num1; i++) {
		scanf("%ld", &table_card[i]);
	}
	quick_sort(my_card, num);

	for(i = 0; i < num1; i++) {
		left = 0;
		right = num -1;
		while(left <= right) {
			long mid = (left + right) /2;
			if(my_card[mid] < table_card[i]) {
				left = mid +1;
			}
			else if(my_card[mid] > table_card[i]) {
				right = mid -1;
			}
			else {
				table_card[i] = 1;
				break;
			}
		}
		if(left > right) {
			table_card[i] = 0;
		}
	}
	
	for(i = 0; i< num1; i++) {
		printf("%d ", table_card[i]);
	}
	return 0;
}

