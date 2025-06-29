#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calcular a distância entre todas as cidades usando a fórmula dadistância euclidiana.
2. Gerar todas as rotas possíveis que começam e terminam na cidade 0.
3. Avaliar cada rota e determinar qual tem a menor distância total.*/

void printarMatrizDistancias(double matriz[10][10]) {
    printf("\nMatriz de Distâncias:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f\t", matriz[i][j]); 
        }
        printf("\n");
    }
}

int main(){
    int cidades[10][2];
    int i;

    for(i = 0; i < 10; i++){
        cidades[i][0] = rand() % 100; 
        cidades[i][1] = rand() % 100; 
        printf("Cidade %d: (%d, %d)\n", i, cidades[i][0], cidades[i][1]);
    }

   
    double matrizDistancias[10][10];
    for(i = 0; i < 10; i++){
        for (int j = i+1; j < 10; j++){

            matrizDistancias[i][i] = 0; 
            matrizDistancias[i][j] = sqrt( pow(cidades[i][0] - cidades[j][0], 2) + pow(cidades[i][1] - cidades[j][1], 2));
            matrizDistancias[j][i] = matrizDistancias[i][j]; 

        }
     
    }
    printarMatrizDistancias(matrizDistancias);

    


    return 0;
}