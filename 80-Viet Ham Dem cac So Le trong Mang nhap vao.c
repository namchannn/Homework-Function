#include <stdio.h>
int countOddNumberInArray(int arr[], int n){
	int count = 0, i;
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 1){
			count++;
		}
	}
	return count;
}

int main(){
	int n, i;
	int arr[1000];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d ", countOddNumberInArray(arr, n));
	return 0;
}
