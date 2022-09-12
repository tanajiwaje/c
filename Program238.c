n#include<stdio.h>

int main()
{
	int divident,divisor,quotient,remainder;
	printf("Enter divident");
	scanf("%d",&divident); //jyala bhag dyaycha ahe to 
	
	printf("Enter divisor");
	scanf("%d",&divisor); //jo bhag denar ahe to 
	
	quotient=divident/divisor;
	remainder=divident%divisor;
	
	int itype;
	float ftype;
	double btype;
	char ctype;
	printf("quotient is :%d \n",quotient);
	printf("remainder is :%d \n",remainder);
	
	printf("size of int %zu\n",sizeof(itype));
	printf("size of float %zu\n",sizeof(ftype));
	printf("size of double %zu\n",sizeof(btype));
	printf("size of char %zu\n",sizeof(ctype));
	
	return 0;
}