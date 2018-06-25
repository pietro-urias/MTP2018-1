//Pietro Urias Martins da Silva
// 11721ECP001

#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    char bina[256];
    printf("Digite um numero em binario: ");
    scanf("%s", &bina);     	
while(bina [y] != '\0')
    {
        if(bina [y] == '0')
        {
            if(x == 0);
            else if(x == 1) x = 2;
            else if(x == 2) x = 1;
            y++;
        }
        else if(bina[y] == '1')
        {
            if(x == 0) x = 1;
            else if(x == 1) x = 0;
            else if(x == 2);
            y++;
        }
        else
        {
            printf("\nO numero digitado nao e' binario");
            return 0;
        }
    }
    if(x == 0) printf("\n O numero  %s e' multiplo de 3", bina);
    else printf("\n O numero  %s nao e' multiplo de 3", bina);
    return 0;
}
