#include <stdio.h>



int main(int argc, char const *argv[])
{
    int valores[10];
    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &valores[i]);
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t k = 0; k < 10 - i; k++)
        {
            printf("%d", valores[k]); 
            if (k < 10 - (i+1))
            {
                printf(" ");
            }
            
        }
        printf("\n");
        for (size_t j = 0; j < 10 - i; j++)
        {
            valores[j] = valores[j] + valores[j+1];
        }
        
        
    }
    

    
    
    
    return 0;
}
