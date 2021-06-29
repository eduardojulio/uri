#include <stdio.h>

int maior();

int main(){
    int a, b, c, max;

    scanf("%d %d %d", &a, &b, &c);

    max = maior(a, b);
    max = maior(max, c);

    printf("%d eh o maior\n", max);
    
    return 0;
}

int maior(int a, int b){
    int c;
    c = ((a+b)+abs(a-b))/2;

    return c;
}