#include <stdio.h>
#include <math.h>
int main(void) {
	float x0=0,x1=0;
	float fx1=0,fx2=0,fx3=0;
	int i=0;
	scanf("%f",&x0);
	do{
	    fx1=x0*x0-25;
    	fx2=2*x0;  //Derivative of fun
    	x1= x0-(fx1/fx2);
    	fx3=x1*x1-25;
    	x0=x1;
    	i++;
    	printf("Iteration no. %d\n",i);
    	printf("Value of x3 is %f\n",x1);
    	printf("Value of f(x3) is %f\n",fx3);
    }
    while(fabs(fx3)>0.001);
	return 0;
}

