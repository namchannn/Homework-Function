#include <stdio.h>
void sortArray(int arr[], int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int n, i;
	int arr[1000];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	sortArray(arr, n);
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
