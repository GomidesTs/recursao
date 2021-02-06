/**
 * 4. Faça um procedimento recursiva que receba um inteiro N e que imprima na tela o valor de N invertido. 
 * Ex: 123 – 321
 */
#include <stdio.h>
#include <stdlib.h>
int invert(int numb)
{
    if (numb != 0)
    {
        printf("%d", numb % 10);
        numb = numb / 10;
        invert(numb);
    }
}

int main(int argc, char const *argv[])
{
    int numb;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numb);
    printf("0  numero %d  tem como ele invertido: ", numb);
    invert(numb);
    return 0;
}
