/**
 * 6. Implemente uma função recursiva que, dados dois números inteiros x e n, calcula o valor de xn
 */
#include <stdio.h>
#include <stdlib.h>

int potencia(int numb1, int numb2)
{
    if (numb2 == 0)
    {
        return 1;
    }
    else
    {
        return (numb1 * potencia(numb1, numb2 - 1));
    }
}

int main(int argc, char const *argv[])
{
    int numb1;
    int numb2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numb1);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numb2);
    printf("o valor de %d elevado a %d e: %d", numb1, numb2, potencia(numb1, numb2));
    return 0;
}
