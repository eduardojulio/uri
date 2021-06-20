#include <stdio.h>

int main()
{
    int valor_notas = 0, valor_moedas = 0, temp = 0;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
    int moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda20 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;

    // Entrada de dados
    scanf("%d.%d", &valor_notas, &valor_moedas);

    // Calculo
    if (valor_notas >= 100)
    {
        temp = valor_notas % 100;
        nota100 = (valor_notas - temp) / 100;
        valor_notas = temp;
    }

    if (valor_notas >= 50)
    {
        temp = valor_notas % 50;
        nota50 = (valor_notas - temp) / 50;
        valor_notas = temp;
    }

    if (valor_notas >= 20)
    {
        temp = valor_notas % 20;
        nota20 = (valor_notas - temp) / 20;
        valor_notas = temp;
    }

    if (valor_notas >= 10)
    {
        temp = valor_notas % 10;
        nota10 = (valor_notas - temp) / 10;
        valor_notas = temp;
    }

    if (valor_notas >= 5)
    {
        temp = valor_notas % 5;
        nota5 = (valor_notas - temp) / 5;
        valor_notas = temp;
    }

    if (valor_notas >= 2)
    {
        temp = valor_notas % 2;
        nota2 = (valor_notas - temp) / 2;
        valor_notas = temp;
    }

    if (valor_notas == 1){
        valor_moedas += 100;
        valor_notas -= 1;
    }

    if (valor_moedas >= 100)
    {
        temp = valor_moedas % 100;
        moeda100 = (valor_moedas - temp) / 100;
        valor_moedas = temp;
    }

    if (valor_moedas >= 50)
    {
        temp = valor_moedas % 50;
        moeda50 = (valor_moedas - temp) / 50;
        valor_moedas = temp;
    }

    if (valor_moedas >= 25)
    {
        temp = valor_moedas % 25;
        moeda25 = (valor_moedas - temp) / 25;
        valor_moedas = temp;
    }

    if (valor_moedas >= 10)
    {
        temp = valor_moedas % 10;
        moeda10 = (valor_moedas - temp) / 10;
        valor_moedas = temp;
    }

    if (valor_moedas >= 5)
    {
        temp = valor_moedas % 5;
        moeda5 = (valor_moedas - temp) / 5;
        valor_moedas = temp;
    }

    if (valor_moedas >= 1)
    {
        moeda1 = valor_moedas;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25); 
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
} 