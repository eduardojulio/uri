#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double questao_a, questao_b, questao_c, questao_d, questao_e;

    scanf("%lf %lf %lf", &a, &b, &c);

    questao_a = a * c / 2;
    questao_b = pow(c, 2) * 3.14159;
    questao_c = ((a+b)*c)/2;
    questao_d = b*b;
    questao_e = a*b;

    printf("TRIANGULO: %.3lf\n"
            "CIRCULO: %.3lf\n"
            "TRAPEZIO: %.3lf\n"
            "QUADRADO: %.3lf\n"
            "RETANGULO: %.3lf\n", questao_a, questao_b, questao_c, questao_d, questao_e);

    return 0;
}