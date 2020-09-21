#include <stdio.h>


int main() 
{
	int iResult, a=10, b=8, c=6, d=5, e=2;
		printf("The value of iResult is: %d\n\n", iResult= a-b-c-d);
		printf("The value of iResult is: %d\n\n", iResult= a-b+c-d);
		printf("The value of iResult is: %d\n\n", iResult=a+b/c/d);
		printf("The value of iResult is: %d\n\n", iResult=a+b/c*d);
		printf("The value of iResult is: %d\n\n", iResult=a/b*c*d);
		printf("The value of iResult is: %d\n\n", iResult=a%b/c*d);
		printf("The value of iResult is: %d\n\n", iResult=a%b%c%d);
		printf("The value of iResult is: %d\n\n", iResult=a-(b-c)-d);
		printf("The value of iResult is: %d\n\n", iResult=(a=(b-c))-d);
		printf("The value of iResult is: %d\n\n", iResult=a-((b-c)-d));
		printf("The value of iResult is: %d\n\n", iResult=a%(b%c)*d*e);
		printf("The value of iResult is: %d\n\n", iResult=a+(b-c)*d-e);
		printf("The value of iResult is: %d\n\n", iResult=(a+b)*c+d*e);
		printf("The value of iResult is: %d\n\n", iResult=(a+b)*(c/d)%e);
		
	return 0;
}
