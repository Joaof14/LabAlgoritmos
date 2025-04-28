#include <stdio.h>

//  Leia um caractere qualquer (como um símbolo: @, #, %, &, etc.) e exiba ele entre colchetes. 

int main (){
    char c;
    printf("Digite um símbolo (@, #, %%, &, etc.) e exiba ele\n");
    scanf("%s", &c);
    printf("[%c]", &c);
    return 0;
}