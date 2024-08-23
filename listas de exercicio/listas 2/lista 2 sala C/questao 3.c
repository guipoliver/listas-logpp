#include <stdio.h>

int main(){
    float N1, N2, R;
    printf("Digite o primeiro valor:");
    scanf("%f", &N1);
    printf("Digite o segundo valor:");
    scanf("%f", &N2);

    if (N1 > N2){
       R = N1 - N2;
       printf("A diferença do maior para o menor é de:%f", R);
    } else{
        R = N2 - N1;
        printf("A diferença do maior para o menor é de:%f", R);
    }
}