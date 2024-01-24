#include<stdio.h>

void SumAndAvg(int x, int y, int *sum, float *avg)
{
    *sum = x+y; 
	*avg = (float)*sum/2;
}
int main()
{
	int x,y,sum;  float avg;
    printf("Enter two Values: ");
    scanf("%d%d",&x,&y);
	SumAndAvg(x,y,&sum,&avg);
    printf(" Sum of given values is: %d\n Average of given values is: %f",sum,avg);
return 0;
}