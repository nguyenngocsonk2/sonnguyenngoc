#include <stdio.h>

int main() 
{
	int a=5, b=6, c=7;
	printf("int a=5, b=6, c=7 \n");
	printf(" gia tri cua a>b la: \t%i\n\n",a>b);
	printf(" gia tri b<c la : \t%i\n\n",b<c);
	printf(" gia tri cua a+b>=c la: \t%i\n\n", a+b>=c);
	printf(" gia tri cua a-b<=b-c la: \t%i\n\n",a-b<=b-c);
	printf(" gia tri cu bieu thuc b-a=b-c la; \t%i\n\n",b-a==b-c);
	printf(" gia tri cua bieu thuc a*b!=c*c la: \t%i\n\n",a*b!=c*c);
	printf("gia ti cua bieu thuc a>10 && b<5 la: %d\n", a>10&&b<5);
	printf(" gia tri cua bieu thuc a>100 || b<5 la: %d\n",  a>100||b<5);
	
	return 0;
}
