//WAP to create inverted triangle pattern of Numerical digits
#include<stdio.h>
int main()
{ int i,j,n;
printf("Enter any side length: ", n);
scanf("%d",&n);

  for(i=n;i>=0;i--){
   for(j=0; j<=i; j++){
    printf(" %d ",j);
  }
	printf("\n");  
  }
	return 0;
}
