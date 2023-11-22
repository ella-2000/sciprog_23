#include <stdio.h>

int main(void) {
	int i, ierr;
	 double a;
// enter info from user
	printf("enter an int and a double\n");
	ierr = scanf("%d %lf", &i, &a);
	
	if(ierr !=2) printf("problem with input");
	return 0;
}



