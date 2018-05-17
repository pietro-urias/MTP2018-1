//Pietro Urias 
//11721ECP001
#include <stdio.h>

int main ()
{
    int X, Y;
    int N[64];
    char P [255];
    int* pt = (int*) P;
    char* pc = (char*) &N;
    printf("  1-> Codificar\n  2-> Decodificar\n\t");
    scanf("%d", &X);
    Y =getchar();
    switch(X)
    {
    case 1:
        for(Y=0;Y<255;Y++)
        
            P[Y]=0;
        
        printf("\t->Insira uma frase com o maximo de 255 caracteres\n\t");
        fgets(P,255,stdin);
        for(Y=0;P[Y]!=0;Y++)
            if(P[Y]==10){P[Y]=0;}
        
        for(Y=0;*(pt+Y)!=0;Y++)
            printf("\t  %d ", *(pt+Y));
        
        break;
    case 2:
        printf("\t-Insira um numero\n\t");
        for(Y=0;Y<64;Y++)
        {
            scanf("%d", &N[Y]);
            if(getchar()=='\n')
            {
                break;
            }
        }
        for (Y=0;*(pc+Y)!=0;Y++)
        printf("\t %c", *(pc+Y));
        
        break;
    }
    return 0;
}
