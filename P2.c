//Pietro Urias Martins da Silva		
// 11721ECP001

#include <stdio.h>
void charparaint(int x,int y[], char z[])
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
int M(char y[])
{
	int i=0;
	for(i=0; y[i]; i++);
	return i;
}
int conta_base2(int num)
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
	int op,b,x,d;
	printf("\n\tBem vindo ao programa de conversao entre bases numericas!!!\n\n\t1. Binario para Decimal\n\t2. Binario para Hexadecimal"
	"\n\t3. Hexadecimal para Decimal\n\t4. Hexadecimal para Binario\n\t5. Decimal para Binario\n\t6. Decimal para Hexadecimal"
	"\n\t7. Octal para Decimal\n\t8. Decimal para Octal\n\n\t\tEscolha uma opcao: ");
	scanf("%d", &op);
	switch(op){
		case 1:{
			printf("\n\tDigite o numero binario: ");
			char z[256];
			int i,x, Gn, m, num=0, alfa=0, y[256];
			getchar();
			gets(z);
			x = M(z) - 1;
			m = M(z);
			Gn= x;
			charparaint(m,y,z);
			for(i=0, x=0; x<=Gn; i++, x++, m--)
			{
				alfa = pot(m-1);
				num+= y[i] *alfa;
			}
			printf("\n\tNumero convertido em decimal: %d", num);
			break;}
		case 2:{
			printf("\n\tDigite o numero binario: ");
			char z[256];
			int i,x, Gn, m, num=0, alfa=0, y[256];
			getchar();
			gets(z);
			x = M(z) - 1;
			m = M(z);
			Gn= x;
			charparaint(m,y,z);
			for(i=0, x=0; x<=Gn; i++, x++, m--)
			{
				alfa = pot(m-1);
				num+= y[i] *alfa;
			}
			printf("\n\tNumero convertido em hexadecimal: %x", num);
			break;}
		case 3:{
			printf("\n\tDigite o numero hexadecimal: ");
			scanf("%x", &b);
			printf("\n\tNumero convertido em decimal: %d", b);
			break;}
		case 4:{
			int i,num=0, nbases=0, base=0;
			printf("\n\tDigite o numero hexadecimal: ");
			scanf("%x", &num); getchar();
			nbases = conta_base2(num);
			base = pot(nbases-1);
			printf("\n\tNumero convertido em binario: ");
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
			printf("\n\tDigite o numero decimal: ");
			scanf("%d", &num); getchar();
			nbases = conta_base2(num);
			base = pot(nbases-1);
			printf("\n\tNumero convertido em binario: ");
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
			printf("\n\tDigite o numero decimal: ");
			scanf("%d", &b);
			printf("\n\tNumero convertido em hexadecimal: %x", b);
			break;}
		case 7:{
			printf("\n\tDigite o numero Octal: ");
			scanf("%o", &b);
			printf("\n\tNumero convertido em Decimal: %d", b);
			break;}
		case 8:{
			printf("\n\tDigite o numero Decimal: ");
			scanf("%d", &b);
			printf("\n\tNumero convertido em Octal: %o", b);
			break;}
	}
	return 0;
}
