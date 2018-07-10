//Pietro Urias Martins da Silva		
// 11721ECP001

#include <stdio.h>

void charint(int x,int y[], char z[])
{
	int i;
	for(i=0; i<x; i++)
		y[i] = z[i] - '0';
}

int pot(int exp)
{
	int k, l;
	for(k=1,l=1; k<=exp; l*=2, k++);
	return l;	
}

int mede(char y[])
{
	int i=0;
	for(i=0; y[i]; i++);
	return i;
}

int ct(int num)
{
	int i=0,j,k;
	if (num%2==0 && num >0)
		i++;
	for (i, j=0; j<num; i++)
	{
		if (num%2==0)
			num = num/2;
		if (num%2==1)
			num--;
	}
	return i;
}


int main()
{
	int op,b,w,d;
	printf("\n  Programa de conversao de bases numericas!!!\n  1-> Binario para Decimal\n  2-> Binario para Hexadecimal"
	"\n  3-> Hexadecimal para Decimal\n  4-> Hexadecimal para Binario\n  5-> Decimal para Binario\n  6-> Decimal para Hexadecimal"
	"\n  7-> Octal para Decimal\n  8-> Decimal para Octal\n\n\n  -> Escolha uma opcao: ");
	scanf("%d", &op);
	switch(op){
		case 1:{
			printf("\n  Digite o numero em binario: ");
			char z[256];
			int i,x, gn, m, num=0, random=0, y[256];
			getchar();
			scanf("%s", z);
			x = mede(z) - 1;
			m = mede(z);
			gn= x;
			charint(m,y,z);
			for(i=0, x=0; x<=gn; i++, x++, m--)
			{
				random = pot(m-1);
				num+= y[i] *random;
			}
			printf("\n  Numero convertido em decimal: %d", num);
			break;}
		case 2:{
			printf("\n  Digite o numero em binario: ");
			char z[256];
			int i,x, gn, m, num=0, random=0, y[256];
			getchar();
			scanf("%s", z);
			x = mede(z) - 1;
			m = mede(z);
			gn= x;
			charint(m,y,z);
			for(i=0, x=0; x<=gn; i++, x++, m--)
			{
				random = pot(m-1);
				num+= y[i] *random;
			}
			printf("\n  Numero convertido em hexadecimal: %s", num);
			break;}
		case 3:{
			printf("\n  Digite o numero em hexadecimal: ");
			scanf("%s", &b);
			printf("\n  Numero convertido em decimal: %d", b);
			break;}
		case 4:{
			int i,num=0, nbases=0, base=0;
			printf("\n  Digite o numero em hexadecimal: ");
			scanf("%s", &num); getchar();
			nbases = ct(num);
			base = pot(nbases-1);
			printf("\n  Numero convertido em binario: ");
			for(i=0; i<nbases; i++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
			break;}
		case 5:{
			int i,num=0, nbases=0, base=0;
			printf("\n  Digite o numero em decimal: ");
			scanf("%d", &num); getchar();
			nbases = ct(num);
			base = pot(nbases-1);
			printf("\n  Numero convertido em binario: ");
			for(i=0; i<nbases; i++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
			break;}
		case 6:{
			printf("\n  Digite o numero em decimal: ");
			scanf("%d", &b);
			printf("\n  Numero convertido em hexadecimal: %d", b);
			break;}
		case 7:{
			printf("\n  Digite o numero em octal: ");
			scanf("%o", &b);
			printf("\n  Numero convertido em decimal: %d", b);
			break;}
		case 8:{
			printf("\n\tDigite o numero em decimal: ");
			scanf("%d", &b);
			printf("\n  Numero convertido em octal: %o", b);
			break;}
	}
	return 0;
}
