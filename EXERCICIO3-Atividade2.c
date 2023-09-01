#include <stdio.h>
int main()
{
float salario=0;
printf("Digite quanto voce recebe de salario\n");
scanf("%f",&salario);

if (salario>1320.00)
    {
    printf("Voce recebe mais de um salario minimo\n");
    }
    
 else
    {
         printf("Voce NAO recebe mais de um salario minimo\n");
    }
    return 0;
}
 