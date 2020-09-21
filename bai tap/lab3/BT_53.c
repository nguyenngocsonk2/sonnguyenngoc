#include <stdio.h>

int main() 
{
	int a, b, c, d;
	a=50;
	b=24;
	c=68;
	d=a*b+c/2;
	printf("\n gia tri cua bieu thuc a*b+c/2 : %d",d);
	d=a%b;
	printf("\n gia tri cua bieu thuc a%b : %d",d);
	d=a*b-c;
	printf("\n gia tri bieu thuc a*b-c : %d", d);
	d=a/b+c;
	printf("\n gia tri bieu thuc a/b+c : %d", d);
	d=a+b*c;
	printf("\n gia tri bieu thuc a+b/c : %d", d);
	d= (a+b)*c;
	printf("\n gia tri bieu thuc (a+b)*c :%d", d);
	d= a*(b+c+(a-c)*b);
	printf("\n gia tri bieu thuc a*(b+c+(a-c)*b)  : %d", d);


	return 0;
}
