/**
 * 3. Escreva um procedimento recursivo que imprima os n primeiros elementos da série de Fibonacci. 
 * O número n deve ser informado pelo usuário.
 */
#include <stdio.h>
#include <stdlib.h>

void fibonacci(int pen, int ult, int numb)
{
    int act;

    if (numb == 0)
    {
        printf("%d", ult);
    }
    else
    {
        act = pen + ult;
        numb--;
        fibonacci(ult, act, numb);
    }
}

int main(int argc, char const *argv[])
{
    int numb;
    printf("Digite o tamanho da seguemcia de fibonacci: ");
    scanf("%d", &numb);
    printf("Soma da seguemcia de fibonacci: ");
    fibonacci(1, 0, numb);
    return 0;
}
