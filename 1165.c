#include <stdio.h>

int primo(int numero)
{
    int i, soma = 0;
    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
            soma++;
    }

    if (soma == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, iMax, numero;

    scanf("%d", &iMax);
    for (i = 0; i < iMax; i++)
    {

        scanf("%d", &numero);
        if (primo(numero))
        {
            printf("%d eh primo\n", numero);
        }
        else
        {
            printf("%d nao eh primo\n", numero);
        }
    }

    return 0;
}