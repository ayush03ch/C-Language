#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void determinant(int a[][3])
{   int m1=(a[1][1]*a[2][2])-(a[2][1]*a[1][2]);
    int m2=(a[1][0]*a[2][2])-(a[2][0]*a[1][2]);
	int m3=(a[1][0]*a[2][1])-(a[2][0]*a[1][1]);
	int det=(a[0][0]*m1)-(a[0][1]*m2)+(a[0][2]*m3);

	printf("Determinant of given matrix is %d",abs(det));
}	

int main()
{
    int a[3][3],i,j;
    printf("Enter elements of Matrix: \n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	        scanf("%d",&a[i][j]);    	
	}

	//function call
	determinant(a);   
return 0;
}