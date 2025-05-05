#include <stdio.h> // Referência: https://petbcc.ufscar.br/stringfuncoes/#strncmp
#include <string.h> // Adiciona funções para facilitar o manuseio com strings
#include <ctype.h> //adiciona funções para facilitar. Referencia: https://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/

/* º Crie um programa que leia frases do usuário até que ele digite "fim". Para
cada frase, informe o número de vogais presentes. */

int main(){
    //Declarar variaveis
    char frase[100];
    int vogais;
    char letra;
    int loop = 1;
    
    while (loop = 1) 
    {
        //Recebe frase
        printf("Digite uma frase\n");
        fgets(frase, 100, stdin);

        //Contar vogais
        for(int i= 0; i < strlen(frase); i ++)
        {
            letra = tolower(frase[i]);
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'  )
            {
                vogais++;
            }
        }
        printf("Número de Vogais: %d\n", vogais);

        if(strcmp(frase, "fim") != 0){
            break;
        }



    }
    return 0;
}