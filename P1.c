//Pietro Urias Martins da Silva
// 11721ECP001


#include <stdio.h> 

int main()
{
	char N[256];
	int x = 0, y = 0;
	printf("\nDigite algum numero em binario: ");
	scanf("%s", N);
	for(int i = 0; N [i] != '\0'; i++)
	{
		if(N[i] == '0' && x == 0)y = 0;
		if(N[i] == '1' && x == 0)y = 1;
		if(N[i] == '0' && x == 1)y = 2;
		if(N[i] == '1' && x == 1)y = 0;
		if(N[i] == '0' && x == 2)y = 1;
		if(N[i] == '1' && x == 2)y = 2;
	x = y;
	y = 0;
	}
	if(x == 0) printf("e' multiplo de 3!!!");
	else printf("nao e' multiplo de 3");
	return 0;
}
