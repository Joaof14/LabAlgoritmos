#include <stdio.h>

int main(){
    int n;
    printf("Digite um número para descobrir se ele é ímpar ou par\n");
    scanf("%d", &n);

    if (n%2 == 0) {
        printf("O número digitado é par");
    }

    else{
        printf("O número digitado é ímpar");
    }
}