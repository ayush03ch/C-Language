//WAP to check whether a character is in lower case or upper
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);

//In C programming, a character variable holds an ASCII value (an integer number between 0 and 127) rather than that character itself. 
// The ASCII value of the "lowercase alphabet" is from 97 to 122. 
// And, the ASCII value of the "uppercase alphabet" is from 65 to 90.
	if(ch >= 'A' && ch <= 'Z')
	{printf("Upper Case");}

	else if(ch >= 'a'&& ch <= 'z')
	{printf("Lower Case");}

	else {printf("Not English");}
return 0;
}
