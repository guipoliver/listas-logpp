#include <stdio.h>

int main(){
    float salario_b, v_horas, salario_l;
    int horas;
    printf("Digite seu salario bruto:");
    scanf("%f", &salario_b);
    printf("Digite suas horas trabalhadas:");
    scanf("%d", &horas);
    if (horas > 160)
    {
        v_horas = salario_b / 160;
        horas = horas - 160;
        horas = horas * v_horas + (horas / 2);
        salario_l = salario_b + horas;
    }
    
    if (salario_b <= 800)
    {
        printf("Seu salario liquido é de %.2f", salario_l);
    }
    if (800 < salario_b && salario_b < 1600)
    {
        salario_b = salario_b - (salario_b * 0.13);
        printf("Seu salario liquido é de %.2f", salario_l);
    }
    if (salario_b > 1600)
    {
        salario_b = salario_b - (salario_b * 0.22);
        printf("Seu salario liquido é de %.2f", salario_l);
    }
    
}