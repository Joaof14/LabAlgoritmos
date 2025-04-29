#include <stdio.h>

// Escreva um algoritmo que leia o nome do usuário e exiba uma mensagem de boas-vindas.

int main(){
    //Declaração de varíavel
    char nome[50];
    
    //receber nome e mostrar mensagem de boas vindas
    printf("Por favor digite seu nome\n");
    scanf("%s", nome);
    printf("Seja bem vindo %s!", nome);
    return 0;
}