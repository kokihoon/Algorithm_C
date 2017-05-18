#include <stdio.h>

void quicksort(int arr[], int size);

void q_sort(int arr[],int left,  int right);

void quicksort(int arr[], int size) {
	q_sort(arr, 0, size-1);
}

void q_sort(int arr[],int left,  int right) {
	int pivot, l_hold, r_hold, temp;
	
	l_hold = left;
	r_hold = right;
	
	pivot = arr[(left+right)/2];
	
	do {
		while(arr[l_hold] < pivot)
			l_hold++;
		
		while(pivot < arr[r_hold])
			r_hold--;
		
		if(l_hold <= r_hold) {
			temp = arr[l_hold];
			arr[l_hold]= arr[r_hold];
			arr[r_hold] = temp;
			l_hold++;
			r_hold--;
		}
		
	}while(l_hold < r_hold);

	if(left < r_hold) {
		q_sort(arr, left, r_hold);
	}
	
	if(l_hold < right) {
		q_sort(arr, l_hold, right);
	}
}


int main(int argc, char* argv[]) {
	
	int num[9], i = 0, sum = 0, count = 0;
	int small = 0, big = 1;
	for(i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}
	
	quicksort(num, 9);

	while(small != 7) {
		for(i = 0; i < 9; i++) {
			if(i != small && i != big) {
				sum += num[i];
			}
		}
		if(sum == 100) {
			break;
		}
		else if(big == 8) {
			small++;
			big = small +1;
		}
		else {
			big++;
		}
		sum = 0;
		
	}

	for(i = 0; i < 9; i++) {
		if(i != small && i != big)
			printf("%d\n", num[i]);
	}	
	
	return 0;
}
