// Pietro Urias Martins da Silva
// 11721ECP001

#include <stdio.h>

float Med(int s, float x)
{
	float i;
	i = s/x;
	return i;
}


int soman(int vet[20], int y) 
{
   	int i, s=0;
   	for (i=0;i<y;i++)
    {
    	s+=vet[i];
	}
      return (s);
}      

int main()
{

	int num[20],s,i,x;
	do
	{
		printf("Escolha com quantos numeros -de 5 ate 20- voce uqer preencher o seu vetor.. \n");
		scanf("%i",&x);
	}
	while(x<5||x>20);
	for(i=0; i<20; i++)
	{
		num[i] = 0;
	}
	for(i=0; i<x; i++)
	{
		printf("%d numero: ", i+1);
		scanf("%i", &num[i]); 
		getchar();
	}
	s = (soman(num, i));
	printf("\nMedia dos %i numeros escolhidos: %f",x, Med(s, x));
	
	return 0;
}
