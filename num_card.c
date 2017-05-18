#include <stdio.h>

long my_card[500000];
long table_card[500000];

void quickSort(long Array[], long array_size);
void q_sort(long Array[], long left, long right);

void q_sort(long Array[], long left, long right) {
	long pivot, l_hold, r_hold;
	l_hold = left;
	r_hold = right;
	pivot = Array[left];
	
	while(left < right) {
		while((Array[right] >= pivot) && (left < right))
			right--;

		if(left != right) {
			Array[left] = Array[right];
		}
		
		while((Array[left] <= pivot) && (left < right))
			left++;
		if(left != right) {
			Array[right] = Array[left];
			right--;
		}
	}
	Array[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	
	if(left < pivot) {
		q_sort(Array, left, pivot -1);
	}
	if(right > pivot) {
		q_sort(Array, pivot + 1, right);
	}
}

void quickSort(long Array[], long array_size) {
	q_sort(Array, 0, array_size-1);
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
	quickSort(my_card, num);

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
