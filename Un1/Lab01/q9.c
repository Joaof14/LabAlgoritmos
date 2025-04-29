#include <stdio.h> 

// Peça para o usuário digitar um símbolo especial, um número e uma letra. Exiba uma "senha" com essa combinação. 

int main() {
    // declarao de variáveis
    char letra, simbolo;
    int numero;

    printf("Programa para receber senha\n");

    //recebimento de valor para cada variável
    printf("Digite um simbolo:");
    scanf("%c", &simbolo);
    printf("Digite um número:");
    scanf("%d", &numero);
    printf("Digite uma letra:");
    scanf("%c", &letra);

    // Output final
    printf("\nSua senha é: %c%d%c", simbolo, numero, letra);
    


    return 0;
}
