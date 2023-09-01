#include <stdio.h>
int main()
{
double peso=0;
printf("Digite seu peso\n");
scanf("%lf",&peso);

if (peso<60)
    {
    printf("Voce pesa MENOS que 60Kg\n");
    }
    
 else
    {
    printf("Voce pesa MAIS que 60Kg\n");
    }
    return 0;
}
