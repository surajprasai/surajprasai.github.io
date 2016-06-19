#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int,int);
rational add_rational(rational,rational);

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
	rational sum = add_rational(r1,r2);
	printf("\n\aThe sum of the two rational numbers is : %d/%d",sum.numerator,sum.denominator);
}

rational makerational(int a, int b)
{
	rational r_number;
	r_number.numerator=a;
	r_number.denominator=b;
	if(b==0)
	{
		exit(0);
	}
	return r_number;
}
rational add_rational(rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator * r2.denominator)+(r1.denominator * r2.numerator);
	result.denominator=(r1.denominator * r2.denominator);
	return result;}
