#include <stdio.h>
#include <stdlib.h>

struct complex
{
	int real;
	int imaginary;
};

main()
{
	struct complex *p; //Declare pointer for object
	
	//Memory allocation for object
	
	p=(struct complex*)malloc(sizeof(struct complex));
	
	printf("Please give the values for complex number :");
	scanf("%d%d",&(p->real),&(p->imaginary));
	
	printf("Complex number : %d + %d i", p->real, p->imaginary);
}
