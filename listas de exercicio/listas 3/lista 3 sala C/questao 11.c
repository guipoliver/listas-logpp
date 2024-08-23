#include <stdio.h>

int main(){
int A, B, C, D, E;
    printf("Digite um numero inteiro para a:");
    scanf("%d", &A);
    printf("Digite um numero inteiro para b:");
    scanf("%d", &B);
    printf("Digite um numero inteiro para c:");
    scanf("%d", &C);
    printf("Digite um numero inteiro para d:");
    scanf("%d", &D);
    printf("Digite um numero inteiro para e:");
    scanf("%d", &E);

    
if (A>B && A>C && A>D && A>E){
    printf("o maior numero é %d",A);
    if (B<C && B<D && B<E){
        printf("o menor numero é %d",B);
    }
    if (C<B && C<D && C<E){
        printf("o menor numero é %d",C);
    }
    if (D<C && D<B && D<E){
        printf("o menor numero é %d",D);
    }
    if (E<C && E<D && E<B){
        printf("o menor numero é %d",E);
    }
}
if (B>A && B>C && B>D && B>E){
    printf("o maior numero é %d",B);
    if (A<C && A<D && A<E){
        printf("o menor numero é %d",A);
    }
    if (C<B && C<D && C<E){
        printf("o menor numero é %d",C);
    }
    if (D<C && D<B && D<E){
        printf("o menor numero é %d",D);
    }
    if (E<C && E<D && E<B){
        printf("o menor numero é %d",E);
    }
}
if (C>A && C>B && C>D && C>E){
    printf("o maior numero é %d",C);
    if (A<B && A<D && A<E){
        printf("o menor numero é %d",A);
    }
    if (B<A && B<D && B<E){
        printf("o menor numero é %d",B);
    }
    if (D<C && D<B && D<E){
        printf("o menor numero é %d",D);
    }
    if (E<C && E<D && E<B){
        printf("o menor numero é %d",E);
    }
}
if (D>A && D>C && D>B && D>E){
    printf("o maior numero é %d",D);
    if (A<C && A<D && A<E){
        printf("o menor numero é %d",A);
    }
    if (C<B && C<D && C<E){
        printf("o menor numero é %d",C);
    }
    if (B<C && B<A && B<E){
        printf("o menor numero é %d",B);
    }
    if (E<C && E<D && E<B){
        printf("o menor numero é %d",E);
    }
}
if (E>A && E>C && E>D && E>B){
    printf("o maior numero é %d",E);
    if (A<C && A<D && A<E){
        printf("o menor numero é %d",A);
    }
    if (C<B && C<D && C<E){
        printf("o menor numero é %d",C);
    }
    if (D<C && D<B && D<E){
        printf("o menor numero é %d",D);
    }
    if (B<C && B<D && B<E){
        printf("o menor numero é %d",B);
    }
}
}