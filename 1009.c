#include <stdio.h>
int main(){
    char nome[100];
    float salario, vendas, total;

    scanf("%s %f %f", &nome, &salario, &vendas);

    if(vendas > 0){
        total = salario + (vendas / 100 * 15);
    }
    else{
        total = salario;
    }
    
    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}