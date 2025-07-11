#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calcular a distância entre todas as cidades usando a fórmula da distância euclidiana.
2. Gerar todas as rotas possíveis que começam e terminam na cidade 0.
3. Avaliar cada rota e determinar qual tem a menor distância total.*/

void printarMatrizDistancias(int tamanho, double matriz[tamanho][tamanho]) {
    printf("\nMatriz de Distâncias:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%.2f\t", matriz[i][j]); 
        }
        printf("\n");
    }
}

double calculoMenorRota(double matriz[10][10], int tamanho){
    
    double soma = 0, rota = 10000000;


    //incompleto
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            for(int k = 0; k < tamanho; k++){

            }
        }
    }

    if(soma < rota){
        rota = soma;
    }


    return rota;
}


int main(){
    int numRotas = 1;
    int tamanho = 5;
    int cidades[tamanho][2];
    int i;
    

    for(i = 0; i < tamanho; i++){
        cidades[i][0] = rand() % 100; 
        cidades[i][1] = rand() % 100; 
        printf("Cidade %d: (%d, %d)\n", i, cidades[i][0], cidades[i][1]);
        numRotas = numRotas*(i+1);
    }

   /* Calculo da matriz de distancias: escolhi matrizes pois a partir dos indices da matriz que sei qual distancia está se  eferindo;
   isto é, de qual cidade pra qual cidade a partir de suas coordenadas*/
    double matrizDistancias[tamanho][tamanho];
    for(i = 0; i < tamanho; i++){
        for (int j = i+1; j < tamanho; j++){

            matrizDistancias[i][i] = 0; 
            matrizDistancias[i][j] = sqrt( pow(cidades[i][0] - cidades[j][0], 2) + pow(cidades[i][1] - cidades[j][1], 2));
            matrizDistancias[j][i] = matrizDistancias[i][j]; 

        }
     
    }
    printarMatrizDistancias(tamanho, matrizDistancias);

    
    calculoMenorRota(5, matrizDistancias); 
    


    
    

    


    return 0;
}