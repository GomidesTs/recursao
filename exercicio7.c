/** 7. Crie uma função recursiva que calcula e retorna a soma de todos os elementos de um vetor 
 * de números reais de tamanho n.
 */
#include <stdio.h>
#include <stdlib.h>

int somaVet(int vet[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }
    else
    {
        return vet[tam - 1] + somaVet(vet, tam - 1);
    }
}

int main(int argc, char const *argv[])
{
    int tam;
    int numb;
    int i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    if (tam <= 0)
    {
        do
        {
            printf("Numero invalido digite um numero maior que 0 (Zero): ");
            scanf("%d", &tam);
        } while (tam <= 0);
    }
    int vet[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o elemento do vetor: ");
        scanf("%d", &vet[i]);
    }
    printf("Somoa dos elementos do vetor e: %d", somaVet(vet, tam));

    return 0;
}
