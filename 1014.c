#include <stdio.h>
int main(){
    int distancia;
    float combustivel, gastoMedio;

    scanf("%d %f", &distancia, &combustivel);

    gastoMedio = distancia / combustivel;

    printf("%.3f km/l\n", gastoMedio);

    return 0;
}