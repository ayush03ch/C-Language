//WAP to create triangle pattern using numbers in reverse order
#include<stdio.h>
int main()
{ int i,j,n;
printf("Enter any side length: ", n);
scanf("%d",&n);

  for(i=n;i>=0;i--){
   for(j=n; j>=i; j--){
    printf(" %d ",j);
  }
	printf("\n");  
  }
	return 0;
}
