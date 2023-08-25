//WAP a program to find roots of a quadratic equation
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{float a,b,c;
float d,f,r,t;
printf("Enter Coefficients of quadratic eq of form ax^2 + bx + c =0 , along with their signs \n");
scanf("%f%f%f", &a,&b,&c);
d = (b*b)-(4*a*c);
f = sqrt(d);
r = (-b+d)/(2*a);
t = (-b-d)/(2*a);
printf("Roots of given equation are \n %f and \n %f",r,t);
return 0;
}
