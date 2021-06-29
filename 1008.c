#include <stdio.h>
int main(){
    float number, hour, hourly_wage,  salary;

    scanf("%f %f %f", &number, &hour, &hourly_wage);

    salary = hour * hourly_wage;

    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", number, salary);
    return 0;
}