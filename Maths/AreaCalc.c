#include<stdio.h>
int main()
{ int s,b,h1,h2,sb,A2,s3,lb,h3,r,mr,nr;
  float pi;
  pi= 3.14;
printf("Choose Shape: \n 1.Parallelogram \n 2.Trapezoid \n 3.Rhombus \n 4.Sphere \n 5.Ellipse \n ");
scanf("%d",&s);

if(s==1)
{
  printf("Enter Base and Height: ");
  scanf("%d%d",&b,&h1); 
  printf("Area of Parallelogram is %d", b*h1);
  }
  
else if(s==2)
{
  printf("Enter Height, long base and short base: ");
  scanf("%d%d%d",&h2,&lb,&sb);
  A2 = lb + sb;
  printf("Area of Trapezoid is %f", 0.5*h2*A2);
  }
  
else if(s==3)
{
  printf("Enter Height and Side: ");
  scanf("%d%d", &h3,&s3);
  printf("Area of Rhombus is %d",h3*s3);
  }
  
else if(s==4)
 {
 printf("Enter radius: ");
  scanf("%d",&r);
  printf("Area of Sphere is %f",pi*r*r);
  }
  
else if(s==5)
{
  printf("Enter Major and Minor Radius: ");
  scanf("%d%d", &mr,&nr);
  printf("Area of Ellipse is %f", pi*mr*nr);
  }
  
else printf("Invalid choice");
return 0;
}
