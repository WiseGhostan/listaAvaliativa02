#include <stdio.h>


    struct jogador
    {
            char nome[30];
            char posicao;
            int forca;
    };
    struct Time
    {
        char nomeTime[30];
        float forcaTime;
        struct jogador jogador[11];
    };

    

float calcularForcaTime(struct jogador jogadores[11]){
    

    float G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;
    
    for (int z = 0; z < 11; z++) {
        switch (jogadores[z].posicao) {
            case 'G':
                G = jogadores[z].forca;
                break;
            case 'L':
                L += jogadores[z].forca;
                break;
            case 'Z':
                Z += jogadores[z].forca;
                break;
            case 'V':
                V += jogadores[z].forca;  
                break;
            case 'M':
                M += jogadores[z].forca; 
                break;
            case 'A':
                A += jogadores[z].forca; 
                break;
            
        }
        
    }
    float forca = ((8 * G + 10 * (L) + 5 * (Z) + 8 * (V) + 11 * (M) + 12 * (A)) / 100.0);
    return forca;
}



int main()
{
    struct Time time[2];

    for (size_t i = 0; i < 2; i++)
    {
        setbuf(stdin, NULL);
        gets(time[i].nomeTime);
        for (size_t j = 0; j < 11; j++)
        {   
            scanf("%99[^;];%c;%d", time[i].jogador[j].nome, &time[i].jogador[j].posicao, &time[i].jogador[j].forca);
            
        }
        time[i].forcaTime = calcularForcaTime(time[i].jogador);
        printf("%s: %.2f de forca\n", time[i].nomeTime, time[i].forcaTime );
    
    }

    if (time[0].forcaTime > time[1].forcaTime) {
        printf("%s eh mais forte\n", time[0].nomeTime);
    } 
    else if (time[1].forcaTime > time[2].forcaTime) {
        printf("%s eh mais forte\n", time[1].nomeTime);
    } else {
        printf("Os times sao iguais\n");
    }
    
    
    return 0;
}
