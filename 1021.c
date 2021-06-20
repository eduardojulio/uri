#include <stdio.h>

int main(){

    double notas[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00}, moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notasint[] = {100, 50, 20, 10, 5, 2}, moedasint[] = {100, 50, 25, 10, 5, 1};
    int i, qtdNotas[6], qtdMoedas[6];
    int vNota, vMoeda;

    scanf("%d.%d", &vNota, &vMoeda);

    printf("NOTAS:\n");
    for(i = 0; i < 6; i++){
        qtdNotas[i] = vNota / notasint[i];
        vNota -= qtdNotas[i] * notasint[i];
        printf("%d nota(s) de R$ %.2lf\n", qtdNotas[i], notas[i]);
    }

    if(vNota == 1){
        vMoeda += 100;
    }

    printf("MOEDAS:\n");
    for(i = 0; i < 6; i++){
        qtdMoedas[i] = vMoeda / moedasint[i];
        vMoeda -= qtdMoedas[i] * moedasint[i];
        printf("%d moeda(s) de R$ %.2lf\n", qtdMoedas[i], moedas[i]);
    }
    return 0;
}