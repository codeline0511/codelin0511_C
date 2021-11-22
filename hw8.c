#include <stdio.h>

int main() 
{
	int ch = 0;
	printf("Input>");
	while ((ch = getchar()) != '\n') 
	{
		if (ch >= 'a' && ch <= 'z') 

			putchar(ch - 32);

		else if (ch >= 'A' && ch <= 'Z') 

			putchar(ch + 32);

		else 
			
			putchar(ch);
	}
	return 0;
}