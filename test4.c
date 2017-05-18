#include <stdio.h>

long arr[1000001];
int main(int argc, char* argv[]) {
	
	long tree_num, tree_length, save_length = 0;
	long i = 0, max_length = 0, count = 0;
	long left, right;


	scanf("%d %d", &tree_num, &tree_length);
	
	for(i = 0; i < tree_num; i++) {
		scanf("%ld", &arr[i]);
		if(max_length < arr[i]) {
			max_length = arr[i];
		}
	}
	left = 0;
	right = max_length;
	while(left <= right) {
		long mid = (left + right)/2;
		count = 0;
		for(i = 0; i < tree_num; i++) {
			if(arr[i] > mid)
				count += arr[i] - mid;
		}
		if(count >= tree_length) {
			if(save_length < mid) {
				save_length = mid;
			}
			left = mid +1;
		}
		else {
			right = mid -1;
		}
	}
	printf("%ld", save_length);

	return 0;
}

