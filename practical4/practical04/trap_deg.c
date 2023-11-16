# include <stdio.h>
# include <math.h>

//making the array a global variable
int  N= 12;
double tanvals[13];

//declaring functions
double degtorad(double degrees);

double traprule(int N);



int main(){
	int i;
	double degrees, radians;
	for(i=0;i<=N;i++){
		degrees = i*5.0;
		radians = degtorad(degrees);
		tanvals[i] = tan(radians);
		//printf("tanvals[%d] = %f at x=%.2fdegrees\n", i , tanvals[i], degrees);
	 }	


	double integral_approx = traprule(N);
	double integral_exact = log(2.0);

	printf("approximation for integral from x=0 to x=60 of tan(x) wrt x is:\n%.5f\n the eaxct solution is:\n%.5f\n", integral_approx, integral_exact);
}

//defining the function that turns degrees into radians
double degtorad(double degrees){
	return (degrees * M_PI)/180.0;
}

//defining trap rule function for area under curve
double traprule(int N){
	int i;
  	double area = tanvals[0] + tanvals[N], width;
	for(i=1; i<N; i++){
		area+=2.0*tanvals[i];
	
	}
	width= degtorad((60.0-0)/(2*N));
	area = width*area;
	return area;
}

