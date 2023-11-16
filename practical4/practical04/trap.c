#include<stdio.h>
#include<math.h>

int main(){

//Initilise end-points and number of points

int N = 12;
double x_0 = 0.0;
double x_12 = M_PI/3.0;
double width = (x_12 - x_0)/(double)N;

//Get values of f(x)=tan(x) for the end points and add them up

double X = tan(x_0)*tan(x_12);

// Get equidistant points, evaluate tan at these points, store 2tan(x) at each step

double x;
double y;
double sum = X;

int i;
for(i=1; i<12; i++){

   x = x_0 + width*i;
   y = tan(x);
   sum += 2*y;

}

double integral_approx = sum * width * 0.5;
double integral_exact = log(2.0);

printf("your approx of integral from x=0 to x=pi/3 of the function tan(x) wrt xis:\n%.5f \n the exact solution is: \n%.5f\n", integral_approx, integral_exact);

return 0;

}

