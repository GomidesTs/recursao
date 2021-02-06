/** 
 * 5. Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos 
 * números de 1 a N.
*/
#include <stdio.h>
#include <stdlib.h>

int somatorio(int numb)
{
    if (numb == 1)
    {
        return 1;
    }
    return numb + somatorio(numb - 1);
}

int main(int argc, char const *argv[])
{
    int numb;
    printf("Digite um numero para se descobrir seu somatorio: ");
    scanf("%d", &numb);
    printf("O numero %d tem o valor de somatorio: %d", numb, somatorio(numb));
    return 0;
}
