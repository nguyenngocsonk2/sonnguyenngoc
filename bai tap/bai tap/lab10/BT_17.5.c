#include <stdio.h>
#include <string.h>

void main()
{
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	
	system("cls");
	
	loc = strchr(str1, chr);
	
	if(loc != NULL)
		printf("%c occurs in %s\n", chr, str1);
	else
		printf("%c do not occurs in %s\n", chr, str1);
	
	loc = strchr(str2, chr);
	if(loc != NULL)
		printf("%c occurs in %s\n", chr, str2);
	else
		printf("%c do not occurs in %s\n", chr, str2);
		
	getch();
}
