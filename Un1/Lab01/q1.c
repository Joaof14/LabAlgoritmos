#include <stdio.h>

// Escreva um algoritmo que exiba na tela o nome da comida favorita. 

int main(){
    char comidaFavorita[50];
    printf("Digite sua comida favorita \n");
    scanf("%s", comidaFavorita);
    printf("Sua comida favorita é %s", comidaFavorita);
    return 0;
}