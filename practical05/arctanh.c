#include <stdio.h>
#include <math.h>

//declaring functions

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){
	double delta, x;
	printf("enter the precision for the maclaurin series:\n");
	scanf("%lf", &delta);
	
	int length=1000;
	double tan1[length]; //storing the result of arctan1
	double tan2[length]; //storing the resukt of arctan2
	
	int j=0; //j: array index
	x=-0.9;
	while(x<0.9 && j < length){
		tan1[j]=arctanh1(x, delta);
		tan2[j]=arctanh2(x);
		printf("the difference between 2 methods for calculating arctan(x) at x=%lf is %.10lf.\n", x, fabs(tan1[j]- tan2[j]));
	j++;
	x=x+0.1; //can try with 0.01
	}


	return 0;
}


//defining functions

double arctanh1(const double x, const double delta){
	double arctan = 0;
	double elem, val;
	int n = 0;

	do{ 
		val=2*n+1;
		elem=pow(x, val)/val;
		arctan += elem;
		n++;

	}while(fabs(elem)>=delta);
	
	return arctan;

}

double arctanh2(const double x){
	return (log(1+x) - log(1-x))/2;

}
