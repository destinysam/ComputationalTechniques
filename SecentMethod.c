#include <stdio.h>
#include <math.h>
int main(void) {
	float x1=0,x2=0,x3=0;
	float fx1=0,fx2=0,fx3=0;
	int i=0;
	scanf("%f",&x1);
	scanf("%f",&x2);
	do{
	    fx1=x1*x1*x1-4*x1+1;
    	fx2=x2*x2*x2-4*x2+1;
    	x3=(x1*fx2)-(x2*fx1)/(fx2-fx1);
    	fx3=x3*x3*x3-4*x3+1;
    	x1=x2;
    	x2=x3;
    	i++;
    	printf("Iteration no. %d\n",i);
    	printf("Value of x3 is %f\n",x1);
    	printf("Value of f(x3) is %f\n",fx3);
    }
    while(fabs(fx3)>0.001);
	return 0;
}

