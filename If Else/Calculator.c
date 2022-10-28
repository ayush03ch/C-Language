//WAP to make a simple calculator Menu Driven Calculator
#include <stdio.h>
int main()
{ 
	int a,b,choice;	
	printf("Choose the operation you want to perform: \n 1.Adition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n ");
	scanf("%d",&choice);
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);

	if(choice == 1)
	   printf("%d", a+b);
	else if(choice == 2)
	   printf("%d", a-b);
	else if(choice == 3)
	   printf("%d", a*b);
    else if(choice == 4)
	   printf("%d", a/b);
	else printf("invalid choice");     

return 0;
}
