#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int a, b, c, d;
	printf("nhap cac so a b c lan luot la: ");
	scanf("\n %d %d %d", &a, &b, &c);
	d= a*b+c/2;
	printf("ga tri d la: %d",d);
	return 0;
}
