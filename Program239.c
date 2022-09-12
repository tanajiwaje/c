#include<stdio.h>

int main()
{
	int a;
	long b;
	long long c;
	double d;
	long double e;
	long long int g;
	//long long long f;
	
	printf("size of int is %zu \n",sizeof(a));
	printf("size of long is %zu\n",sizeof(b));
	printf("size of long long is %zu\n",sizeof(c));
	printf("size of double is %zu\n",sizeof(d));
	printf("size of long double is %zu \n",sizeof(e));
	printf("size of long long int is %zu",sizeof(g));
	return 0;
}