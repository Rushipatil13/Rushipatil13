#include<stdio.h>
#include<conio.h>

void main()
{
    char name[15];
    float a, b, c, d, e, f;
    clrscr();
    printf("Product Name:");
    scanf("%s",&name);

    printf("Price:");
    scanf("%f",&a); /*Price*/

    printf("Quantity:");
    scanf("%f",&b); /*Quantity*/

    c = a * b; /*Final Price*/
    printf("\nBilling Price=%.2f",c);

    printf("\nDiscount:");
    scanf("%f",&f); /*Discount*/

    d = (c*f)/100; /*Calculating discount*/
    e = c - d;

    printf("\nDiscounted=%.2f",d);
    printf("\nFinal Price=%.2f",e);

    getch();
}
