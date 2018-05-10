// Pietro Urias     11721ECP001

#include <stdio.h>

int main() {
		
	char C[256];
	int x,y,N[256],c=0;
	printf("Digite a sequencia de caracteres desejada: ");
	scanf("%s", C);
	for(x=0, y=0; C[y]; x++, y++)
	{
		while (!(C[y] >='0' && C[y] <='9'))
		{	y++;	
		if(!(C[y]))
		break;
		}	
		if(C[y])
		{	N[x] = C[y] - '0';
			c++;		}
	}
	if (c>0)
	{
		for(x=0; x<c; x++)
		printf("%d", N[x]);
	}
	else printf("0");
	return 0;
}
