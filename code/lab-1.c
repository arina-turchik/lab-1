#include <stdio.h>
int main ()
{
float a, b, x;
printf("Enter a -> ");
scanf("%f", &a);
printf("Enter b -> ");
scanf("%f", &b);
printf("Enter x -> ");
scanf("%f", &x);

if ((a*b) == x)
    {
    printf("Произведение a и b равно x. \n");
    }
if ((a*b) != x)
    {
    if ((a*b) < x)
        {
        float q=(a*b)/x;
        printf("Частное произведения a и b и x равно %f \n", q);
        }
    if ((a*b) > x)
        {
        float p=(a*b)-x;
        printf("Разность произведения a и b и x равна %f \n", p);
        }
    }
return 0;
} 
