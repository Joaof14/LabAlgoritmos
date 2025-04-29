#include <stdio.h>

//  Leia um caractere qualquer (como um símbolo: @, #, %, &, etc.) e exiba ele entre colchetes. 

int main (){
    // Declaração de variável
    char caracter;

    //Receber símbolo e retornar ele no terminal
    printf("Digite um símbolo (@, #, %%, &, etc.) e exiba ele\n");
    scanf("%s", &caracter);
    printf("[%s]\n", &caracter);
    return 0;
}