#include <stdio.h>

int main(){
  float V, T, D, LU;

  printf("Digite a velocidade media durante a viagem:");
  scanf("%f", &V);

  printf("Digite o tempo gasto durante a viagem:");
  scanf("%f", &T);

  D = V * T;
  LU = D / 12;

 printf("Velocidade média durante a viagem: %.2f km/h, Tempo gasto durante a viagem: %.2f horas, Distância percorrida durante a viagem: %.2f km, Litros usados durante a viagem: %.2f litros\n", V, T, D, LU);

}