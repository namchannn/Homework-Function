#include <stdio.h>
// Input void show() function
void show(char name[100]){
	// Display information
	printf("Hello %s", name);
}
// Input int main() function
int main(){
	char name[100];
	scanf("%s", name);
	show(name);
	return 0;
}
