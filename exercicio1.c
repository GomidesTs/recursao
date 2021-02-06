/**
 * 1. Escreva uma função recursiva que procure um valor em um vetor e retorne o índice do elemento,
 *  caso ele exista no vetor, ou -1 caso, caso contrário.
 */
#include <stdio.h>
#include <stdlib.h>

int verifica(int vet[], int tam, int numb)
{
    if (tam < 0)
    {
        return -1;
    }
    if (vet[tam] == numb)
    {
        return tam;
    }
    else
    {
        return verifica(vet, tam - 1, numb);
    }
}

int main(int argc, char const *argv[])
{
    int tam;
    int numb;
    int result;
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
    printf("Digite o elemento que deseja encontrar: ");
    scanf("%d", &numb);
    int vet[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Digite o elemento do vetor: ");
        scanf("%d", &vet[i]);
    }
    result = verifica(vet, tam, numb);
    if (result == -1)
    {
        printf("O elemento %d nao pertende ao vetor por isso seu retorno foi %d", numb, result);
    }
    else
    {
        printf("O elemento %d pertende ao vetor e esta na posisao %d", numb, result);
    }
    return 0;
}
