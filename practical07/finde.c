// find e using taylor series expansion
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n);

int main(void){

	int i, order;
	double e, *terms;

//enter polynomial order
	printf("enter the polynomial order\n");
	if(scanf("%d", &order) !=1){
		printf("didn't enter a number\n");
		return 1;
	}

	//allocate space depending on n
	terms = malloc(order*sizeof(double));
	for (i=0; i<order; i++){
		terms[i]=1.0/(double)factorial(i+1);
		printf("e term for order %d is %1.12lf \n", i+1, terms[i]);
	}
	e=1.0;
	for(i=0; i<order; i++){
		e=e+terms[i];
	}
	free(terms);

	printf("estimate for e %.10lf, with difference %e\n", e, e-exp(1.0));
	
return 0;
}


//factorial function definition
int factorial(int n){
	if(n<0){
		printf("error:negative number passed to factorial.\n");
		return(-1);
	}
	else if(n==0){return 1;}
	else{return(n*factorial(n-1));}
		

}
