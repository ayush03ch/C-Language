//WAP using structures and functions to add,sub,mult,divide two complex numbers
#include<stdio.h>
void add(int real1, int img1, int real2, int img2);
void subtract(int real1, int img1, int real2, int img2);
void multiply(int real1, int img1, int real2, int img2);
void divide(int real1, int img1, int real2, int img2);

struct complex{
	int real,img;
};

int main()
{
	struct complex n1,n2;
	printf("Enter first complex number: ");
	scanf("%d %d",&n1.real, &n1.img);
	printf("Enter second complex number: ");
	scanf("%d %d",&n2.real, &n2.img);

	//calculation functions
	add(n1.real, n1.img, n2.real, n2.img);
	subtract(n1.real, n1.img, n2.real, n2.img);
	multiply(n1.real, n1.img, n2.real, n2.img);
	divide(n1.real, n1.img, n2.real, n2.img);

return 0;
}

void add(int real1, int img1, int real2, int img2)
{
	int real = real1 + real2;
	int img = img1 + img2;
	if(img >= 0)
		printf("\nAddition : %d + i%d",real,img);
	else	
		printf("\nAddition : %d - i%d",real,img);
}

void subtract(int real1, int img1, int real2, int img2)
{
	int real = real1 - real2;
	int img = img1 - img2;
	if(img >= 0)
		printf("\nSubtraction : %d + i%d",real,img);
	else	
		{
			img = (-1)*img;
			printf("\nSubtraction : %d - i%d",real,img);
		}
}

void multiply(int real1, int img1, int real2, int img2)
{
	int real = (real1)*(real2) - (img1)*(img2);
	int img = (real1)*(img2) + (img1)*(real2);

	if(img >= 0)
		printf("\nMultiplication : %d + i%d",real,img);
	else	
		{
			img = (-1)*img;
			printf("\nMultiplication : %d - i%d",real,img);
		}
}

void divide(int real1, int img1, int real2, int img2)
{
	//calculation by rationalization
	//numerator
	float p = (real1)*(real2) + (img1)*(img2);
	float q = -(real1)*(img2) + (img1)*(real2);

	//denominator
	float r = (real2)*(real2) + (img2)*(img2);

	//final
	float real = p/r;
	float img = q/r; 

	if(img >= 0)
		printf("\nDivision : %.2f + i%.2f",real,img);
	else	
		{
			img = (-1)*img;
			printf("\nDivision : %.2f - i%.2f",real,img);
		}
}

