#include <stdio.h>

int main()
{
	int cnt, cnt1;
	do
	{
		printf("\nEntera Number : ");
		scanf("%d", &cnt);
		printf("No. is %d",cnt);
		cnt1++;
	} while ( cnt != 0);
	printf("\n THe total numbers enterd were %d", --cnt1);
	return 0;
}
