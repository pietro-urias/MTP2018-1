//Pietro Urias Martins da Silva
//11721ECP001


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dim
{
	float large;
	float P;
	float H;
};

struct produto
{
	char nome[64];
	float preco;
	struct Dim end;
};

void cadastro(struct produto vprod[], int i)
{
	printf("\nNome do produto:");
	fgets(vprod[i].nome, 64, stdin);
	printf("\nPreco do produto:");
	scanf("%f", &vprod[i].preco); getchar();
	printf("\nLargura do produto:");
	scanf("%f", &vprod[i].end.large); getchar();
	printf("\nProfundidade do produto:");
	scanf("%f", &vprod[i].end.P); getchar();
	printf("\nAltura do produto:");
	scanf("%f", &vprod[i].end.H); getchar();
}
void pesquisa(struct produto vprod[], int i)
{
	char cond[64];
	strcpy(cond, " ");
	if(strcmp(cond, vprod[i].nome) == 0) printf("\nProduto nao cadastrado!");
	else 
	printf("%s R$ %.2f L: %gm x P: %.2fm x A: %.2fm", vprod[i].nome, vprod[i].preco, vprod[i].end.large, vprod[i].end.P, vprod[i].end.H);
}


int main()
{
	struct produto vprod[2];
	int op, produto, nprod = 0;
	strcpy(vprod[0].nome, " ");
	strcpy(vprod[1].nome, " ");
	do{
		printf("1-> Cadastro\n2-> Consulta\n3-> Sair\n\nDigite uma opcao: ");
		scanf("%d", &op); getchar();  
		switch(op)
		{
			case 1: 
				printf("\nEscolha  numero do produto:");
				scanf("%d", &produto); getchar();
				switch(produto)
				{
					case 1:
						nprod = produto -1;
						cadastro(vprod, nprod);
						printf("\nProduto 1 cadastrado com sucesso");
						nprod = 0;
						break;
					case 2:
						nprod = produto -1;
						cadastro(vprod, nprod);
						printf("\nProduto 2 cadastrado com sucesso");
						nprod = 0;
						break;
					default: break;
				}
				break;
			case 2:	
				printf("\nEscolha o produto 1 ou 2:");
					scanf("%d", &produto); getchar();
				switch(produto)
				{
					case 1:
						nprod = produto -1;
						pesquisa(vprod, nprod);
						nprod = 0;
						break;
					case 2:
						nprod = produto -1;
						pesquisa(vprod, nprod);
						nprod = 0;
						break;
					default: break;
				}
				break;
			case 3: return 0;
			default: break;
	}	
		printf("\n\n");
	}while(op != 4);
	return 0;
}
