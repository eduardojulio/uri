#include <stdio.h>
int main(){
    int codigo, peca, i;
    float vlr_unitario, total = 0;

    for(i = 0; i < 2; i++){
        scanf("%d %d %f", &codigo, &peca, &vlr_unitario);
        total += peca * vlr_unitario;
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}