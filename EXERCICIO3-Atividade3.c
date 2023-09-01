#include <stdio.h>
int main()
{
float altura=0;
printf("Digite a sua altura em centimetros\n");
scanf("%f",&altura);

if (altura>180)
    {
    printf("Voce tem MAIS de 1,80m de altura\n");
    }
    
 else
    {
         printf("Voce tem MENOS de 1,80m de altura\n");
    }
    return 0;
}
