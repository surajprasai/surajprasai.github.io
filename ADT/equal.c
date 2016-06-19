#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int,int);
int equal_rational(rational,rational);

int main()
{
		int a,b,c,d;
	printf("enter numerator of first number: ");
	scanf("%d",&a);
	printf("enter denomiantor of first number: ");
	scanf("%d",&b);
	printf("enter numerator of second number: ");
	scanf("%d",&c);
	printf("enter denominator of second number: ");
	scanf("%d",&d);
	
	rational r1= makerational(a,b);
	rational r2= makerational(c,d);
	int equality = equal_rational(r1,r2);
	if(equality == 1)
	{
		printf("The two rational numbers are equal");
	}else{
		printf("The two rational numbers are not equal");
	}
}

rational makerational(int a, int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	if(b==0)
	{
		printf("Invalid input");
		exit(0);
	}
	return r_number;
}
int equal_rational(rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator * r2.denominator);
	result.denominator=(r1.denominator * r2.numerator);
	if(result.numerator == result.denominator)
	{
		return 1;
	}else
	{
		return 0;
	}
	;}
