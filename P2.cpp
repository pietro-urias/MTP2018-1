//Pietro Urias  11721ecp001

#include <stdio.h>



void dec_all(int B)
{	int R[100],N, x, y=0, Var1;
	printf("\nDigite o valor em decimal a ser convertido: ");
	scanf("%d", &N);
	Var1 =N;
	
	for(x=0;N >= B; x++)
	{	R[x] =N%B;
		N =N/B;
		if(N < B)
		{	x++;
			R[x] =N;		}
	} x--;
	
	if(B==16)
	{	printf("\nValor convertido: ");
		if(Var1 >= B)
		{	do{	printf("%X", R[x]);
			x--;	}while(x>=0); 	}
		else if(Var1 < B)
		{	printf("%X",N);	}
	}
	
	else
	{	printf("\nValor convertido: ");
		do{	printf("%d", R[x]);
			x--;	}while(x>=0); 	}	
	printf("\n\n");
}

void bin_all(int B)
{	int  R1[100], R2[100],N, x, Var1, y=0, n=1, S=0, k=0;
	char R[100];
	printf("\nDigite o valor em binario a ser convertido: ");
	scanf("%s", &R);
	for(x=0; R[x] != '\0'; x++);
	x--;
	k=x;
	do
	{	if(R[x] == '0') {R1[x] = 0; }
		else if(R[x] == '1') {R1[x] = 1;}
		x--;
	}while(x>=0);
	x = k;
	do
	{	for(k=0; k<y; k++)
		{	n*=2;	}
		S += R1[x]*n;
		n=1;
		x--;
		y++;
	}while(x>=0);
	if(B != 16)
	{	printf("\nValor convertido: %d", S);	}
	if(B == 16)
	{	if(S >= B)
		{for(x=0; S >= B; x++)
		{	R2[x] = S%B;
			S = S/B;
			if(S < B)
			{	x++;
				R2[x] = S;		}
		} x--;
		if(B == 16)
		{	printf("\nValor convertido: ");
			do{	printf("%X", R2[x]);
				x--;	}while(x>=0); 	}	}
		else
		{	R2[x] = S;
			if(B == 16)
			{	printf("\nValor convertido: ");
				do{	printf("%X", R2[x]);
					x--;	}while(x>=0); 	}	}
	}	
	printf("\n\n");
}

void hex_all(int B)
{	char R[100];
	int R1[100],N, x, Var1, y=0, n=1, S=0, k=0;
	printf("\nDigite o valor em hexadecimal a ser convertido: ");
	scanf("%s", &R);
	for(x=0; R[x] != '\0'; x++);
	x--;
	Var1 = x;
	k=x;
	
	do
	{	if(R[x] == 'A' || R[x] == 'a') {R[x] = 10; }
		else if(R[x] == 'B' || R[x] == 'b') {R[x] = 11; }
		else if(R[x] == 'C' || R[x] == 'c') {R[x] = 12; }
		else if(R[x] == 'D' || R[x] == 'd') {R[x] = 13; }
		else if(R[x] == 'E' || R[x] == 'e') {R[x] = 14; }
		else if(R[x] == 'F' || R[x] == 'f') {R[x] = 15; }
		else {	R[x] -= 48;		}	x--;							}while(x>=0);
	x = Var1;

	do
	{	for(k=0; k<y; k++)
		{	n*=16;	}
		S += R[x]*n;
		n=1;	x--;	y++;
	}while(x>=0);
	if(B != 2)
	{	printf("\nValor convertido: %d", S);	}
	if(B == 2)
	{	for(x=0; S >= B; x++)
		{	R[x] = S%B;
			S = S/B;
			if(S < B)
			{	x++;
				R[x] = S;		}
		} x--;
		printf("\nValor convertido: ");
		do{	printf("%d", R[x]);
			x--;	}while(x>=0); 	}
	printf("\n\n");
}

void oct_dec(int B)
{	char R[100];
	int R1[100],N, x, Var1, y=0, n=1, S=0, k=0;
	printf("\nDigite o valor em octal a ser convertido: ");
	scanf("%s", &R);
	for(x=0; R[x] != '\0'; x++);
	x--;
	Var1 = x;
	k=x;
	do
	{	R[x] -= 48;
		x--;			}while(x>=0);
	x = Var1;
	do
	{	for(k=0; k<y; k++)
		{	n*=8;	}
		S += R[x]*n;
		n=1;	x--;	y++;
	}while(x>=0);
	printf("\nValor convertido: %d", S);	printf("\n\n");	}

int main ()
{
	int OP, REX=16, BN=2, OCT=8;
	
	do
	{	printf("-- Menu de conversores --");
		printf("\n -> 1:Binario para Decimal;");
		printf("\n -> 2:Binario para Hexadecimal;");
		printf("\n -> 3:Hexadecimal para Decimal;");
		printf("\n -> 4:Hexadecimal para Binario;");
		printf("\n -> 5:Decimal para Binario;");
		printf("\n -> 6:Decimal para Hexadecimal;");
		printf("\n -> 7:Octal para Decimal;");
		printf("\n -> 8:Decimal para Octal;");
		printf("\n -> 9:Fechar;");
		printf("\n\n **A opcao escolhida e: ");
		scanf("%d", &OP);

		switch(OP)
		{	case 1:
				bin_all(BN);
				break;
			case 2:
				bin_all(REX);
				break;
			case 3:
				hex_all(REX);
				break;
			case 4:
				hex_all(BN);
				break;
			case 5:
				dec_all(BN);
				break;
			case 6:
				dec_all(REX);
				break;
			case 7:
				oct_dec(OCT);
				break;
			case 8:
				dec_all(OCT);
				break;
			case 9:
				break;
			default:
				break;
		}
	}
	while(OP != 9);
	return 0;
}
