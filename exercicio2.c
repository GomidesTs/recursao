/**
 * 2. Escreva um procedimento recursivo que receba uma string como parâmetro e a exiba invertida
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(char str[], int tam)
{
    if (tam == 0)
    {
        printf("%c", str[tam]);
    }
    else
    {
        printf("%c ", str[tam]);
        imprime(str, tam - 1);
    }
}

int main(int argc, char const *argv[])
{
    int tam;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    if (tam <= 0)
    {
        do
        {
            printf("Numero invalido digite um numero maior que 0 (Zero): ");
            scanf("%d", &tam);
        } while (tam <= 0);
    }
    char str[tam];
    printf("Digite uma String: ");
    fflush(stdin);
    fgets(str, tam+1, stdin);
    imprime(str, tam);
    return 0;
}
