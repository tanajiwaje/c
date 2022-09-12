#include<stdio.h>

int main()
{
	double a=19.3;
	double b=23.5;
	double c=0.0;
	printf("before swaping number is a:%.2lf and b:%.2lf\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swaping number is a:%.2lf and b:%.2lf\n",a,b);
	return 0;
}