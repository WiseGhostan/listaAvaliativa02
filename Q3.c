#include <stdio.h>
#include <string.h>

int matrizA[4][4], matrizB[4][4], matrizResultado[4][4];
char operacao[10];

int main(){
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t k = 0; k < 4; k++)
        {
                scanf("%d", &matrizA[i][k]);
        }
        
    }
    for (size_t i = 0; i < 4; i++)
    {
        
        for (size_t k = 0; k < 4; k++)
        {
                
                scanf("%d", &matrizB[i][k]);
        }
        
    }
    
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t k = 0; k < 4; k++)
            {
                    matrizResultado[i][k] = matrizA[i][k] + matrizB[i][k];
            }

        } 
    } else if (strcmp(operacao, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                matrizResultado[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }
        }
    } else if (strcmp(operacao, "sub") == 0) {
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t k = 0; k < 4; k++)
            {
                    matrizResultado[i][k] = matrizA[i][k] - matrizB[i][k];
            }
            
        }
    }


    for (size_t j = 0; j < 4; j++)
    {
        for (size_t z = 0; z < 4; z++)
        {
                printf("%4d", matrizResultado[j][z]);
        }
        printf("\n");
        
    }

    return 0;
}
