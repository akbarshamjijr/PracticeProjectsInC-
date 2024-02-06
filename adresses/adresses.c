#include <stdio.h>



int main(){
	
	int x = 5;
	int y = 7;

	int* Y_PTR = &y;
	int* X_PTR = &x;

	*X_PTR = *Y_PTR;

	printf("%d \n", x);

	return 0;
}
