#include <stdio.h>
#include <math.h>


int N[10] = {0, };

int main() {
	int max = 0, i, NUM, check, temp;
	scanf("%d", &NUM);
	for(i = 0; i < NUM; i++) {
		scanf("%d", &N[i]);
	}
	quick_sort(N, 0, NUM-1);

	do {
		check = next_permutation(N, NUM);
		temp = sum(N, NUM-1);
		if(temp > max) {
			max = temp;
		}
	}
	while(check);
	printf("%d", max);	
	return 0;
}

void swap(int* a, int* b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
 
void quick_sort(int* array, int start, int end){
 
    if(start>=end) return;
 
    int mid=(start+end)/2;
    int pivot=array[mid];
 
    swap(&array[start],&array[mid]);
 
    int p=start+1,q=end;
 
    while(1){
        while(array[p]<=pivot){ p++; }
        while(array[q]>pivot){ q--; }
 
        if(p>q) break;
 
        swap(&array[p],&array[q]);
    }
 
    swap(&array[start],&array[q]);
 
    quick_sort(array,start,q-1);
    quick_sort(array,q+1,end);
 
}

int sum(int N[], int NUM) {
	int i = 0;
	int sum = 0;
	while(NUM) {
		sum += abs(N[NUM] - N[NUM-1]);
		
		NUM--;
	}
	
	return sum;
}
int next_permutation(int a[], int n) {
	int i = n-1;
	int temp;
	while(i > 0 && a[i-1] >= a[i]) i -= 1;
	if(i <= 0) return 0;
	int j = n-1;
	while(a[j] <= a[i-1]) j-= 1;
	temp = a[i-1];
	a[i-1] = a[j];
	a[j] = temp;
	j = n-1;
	while(i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i+=1;
		j-=1;
	}
	return 1;
}
