#include <stdio.h>
// Input void show() function
void show(){
	int i;
	// Display all the numbers from 1 to 100, divisible by 3 and not divisible by 5
	for(i = 1; i <= 100; i++){
		if(i % 3 == 0 && i % 5 != 0){
			printf("%d ", i);
		}
	}
}
// Input int main() function
int main(){
	// Use show() function to print output
	show();
	return 0;
}
