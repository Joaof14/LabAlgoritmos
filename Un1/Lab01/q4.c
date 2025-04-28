#include <stdio.h>

int main(){
    printf("Progrma para descobrir qual número inteiro é maior\n");
    int n1, n2;
    printf("Digite o primeiro número\n");
    scanf("%d", &n1);
    printf("Digite o Segundo número\n");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("%d é maior que %d", n1, n2);
    }
    else if (n2 > n1) {
        printf("%d é menor que que %d", n1, n2);
    }
     else{
        printf("%d é igual a %d", n1, n2);
     }


    return 0;
}