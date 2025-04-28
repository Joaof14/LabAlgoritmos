#include <stdio.h>

//  Leia um caractere qualquer (como um símbolo: @, #, %, &, etc.) e exiba ele entre colchetes. 

int main (){
    char caracter;
    printf("Digite um símbolo (@, #, %%, &, etc.) e exiba ele\n");
    scanf("%s", &caracter);
    printf("[%s]\n", &caracter);
    return 0;
}