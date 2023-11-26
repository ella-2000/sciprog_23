#include <stdio.h>
//GCD iterative function
int gcd_iteration(int a, int b){
	int temp;
	while(b!=0){
		temp=b;
		b =a%b;
		a=temp;
		
	}
	return a;

}
//GCD recursive function
int gcd_recursive(int a, int b){
	if (b==0){
		return a;
	}
	else {
	        return	gcd_recursive(b, a%b);
	
	}
}

int main(void){

	int a;
	int b;
	printf("please enter a positive integer a:\n");
	scanf("%d",&a);
	while(a<=0){
		printf("this integer is not positive\n");
	        printf("please enter a positive integer a:\n");
        	scanf("%d",&a);
	
	}

        printf("please enter a positive integer b:\n");
        scanf("%d",&b);
        while(b<=0){
                printf("this integer is not positive\n");
	        printf("please enter a positive integer b:\n");
        	scanf("%d",&b);
                
        }
	
	int ans_i = gcd_iteration(a,b);
	int ans_r = gcd_recursive(a,b);
	printf("Using iteration we get the answer:%d\n", ans_i);
	printf("Using recursion we get the answer:%d\n", ans_r);

return 0;

}
