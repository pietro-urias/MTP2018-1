// Pietro Urias Martins   11721ECP001

#include <stdio.h>

void D(int N)
{
	int X = 0, A;
	for(A = 31; A >= 0; A--)
	{
		X = N >> A;
		if(X & 1)
		{
			printf("1");
		}
	    else
	    {
	    	printf("0");
		}
	}
}

void Nope()
{
	int N, n;
	printf("Numero -> ");
	scanf("%d", &N);
	n = ~N;
	printf("NOT %d (", N);
	D(N);
	printf(") : %d (", n);
	D(n);
	printf(")");
}

void e()
{
	int i, j, k;
	printf("Numeros -> ");
    scanf("%d %d", &i, &j);
	k = i & j;
	printf("%d (", i);
	D(i);
    printf(") AND %d (", j);
	D(j);
	printf(") : %d (", k);
	D(k);
	printf(")");
}

void ou()
{
	int i, j, k;
	printf("Numeros -> ");   
	scanf("%d %d", &i, &j);
	k = i | j;
	printf("%d (", i);
	D(i);
    printf(") OR %d (", j);
	D(j);
	printf(") : %d (", k);
	D(k);
	printf(")");
}

void ouexclusivo()
{
	int i, j, k;
	printf("Numeros -> ");  
	scanf("%d %d", &i, &j);
	k = i ^ j;
	printf("%d (", i);
	D(i);
    printf(") XOR %d (", j);
	D(j);
	printf(") : %d (", k);
	D(k);
	printf(")");
}

void Direita()
{
	int i, j, k;   
	printf("Numeros -> "); 
	scanf("%d %d", &i, &j);
	k = i >> j;
	printf("%d (", i);
	D(i);
    printf(") >> %d (", j);
	D(j);
	printf(") : %d (", k);
	D(k);
	printf(")");
}

void Esquerda()
{
	int i, j, k;
	printf("Numeros -> ");
	scanf("%d %d", &i, &j);
	k = i << j;
	printf("%d (", i);
	D(i);
    printf(") << %d (", j);
	D(j);
	printf(") : %d (", k);
	D(k);
	printf(")");
}

int main()
{
	int B;
	printf("Tipo de operacao: ");
	scanf("%d", &B);
	if(B == 1)
	{
		Nope();
	}
	if(B == 2)
	{
	   e();
	}
	if(B == 3)
	{

		 ou();
	}
	if(B == 4)
	{
		ouexclusivo();
	}
	if(B == 5)
	{
		Direita();
	}
	if(B == 6)
	{
		Esquerda();
	}
	if(B < 1 || B >6)
	{
		 printf("Operacao invalida");
	}
	return 0;
}
