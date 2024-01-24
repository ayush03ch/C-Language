// Basic program on array manipulation using pointer approach.

#include<stdio.h>

int main()
{
int i,marks[4],*ptr;
 ptr = &marks[0];       //also ptr = marks;
	for(i=0;i<4;i++)
	{
		printf("Enter marks of student %d : ",i+1);
		scanf("%d",ptr);
		ptr++;
	}
	for(i=0;i<4;i++)
	{
		printf("Marks of student %d is : %d\n",i+1,marks[i]);
		
	}
return 0;
}
