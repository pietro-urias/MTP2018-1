//Pietro Urias Martins da Silva
//11721ECP001

#include <stdio.h>
int FA(int x,int y){
    if (x==0){
    	return y+1;	
	}
    if (x>0 && y==0){
    	return FA(x-1, 1);	
	}
    if (x>0 && y>0){
    	return FA(x-1,FA(x,y-1));
	}
    return FA(x-1,FA(x,y-1));
}
int main ()
{
    int n=0, m=0;
    printf("Digite o valor de m e n, respectivamente: ");
    scanf("%d %d",&m,&n);
    getchar();
    printf("O resultado e: %d",FA(m, n));
    return 0;
}
