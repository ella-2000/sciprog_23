#include <stdio.h> 
#include <stdlib.h>

//Declaring functions/ prototype
//input arguments: Fn-1 and Fn-2
//on exit: Fn and Fn-1
void fibonacci(int *a, int *b);


int main(){

	int n, i;
	int f0=0, f1=1;
		
	printf("enter a positive integer\n");
	scanf("%d", &n);

	if(n<1){
		printf("the value entered is not positive\n");
		exit(1);
	}	
	
	printf("the fibonacci sequence is: \n");
	printf("%d, %d, ", f0, f1);

	//calculating fibonacco sequence from 2
	for(i=2; i<=n; i++){
		fibonacci(&f1, &f0);
		printf("%d,", f1);
		
		if((i+1)%10 == 0) printf("\n");
	
	}
	return 0;
}

//function definition 
//

void fibonacci(int *a, int *b){
	int next;
	//*a=fn-1 *b=fn-2 next=fn
	next = *a +*b;
	//*a=fn *b=fn-1
	*b=*a;
	*a=next;
}
