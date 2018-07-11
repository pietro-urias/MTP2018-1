//Pietro Urias 11721ECP001
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 64

typedef struct D{
    float largura;
    float profundidade;
    float altura;
}D;

typedef struct P{
    char nome[MAXLEN];
    float preco;
    D dimensoes;
}P;

void cad(P * p){
    printf("\nDigite o nome do produto: ");
    fgets(p->nome, MAXLEN, stdin);
    p->nome[strlen(p->nome)-1] = '\0';
    printf("\nDigite o preco: ");
    scanf("%f", &(p->preco));
    getchar();
    printf("\nDigite a largura: ");
    scanf("%f", &(p->dimensoes.largura));
    getchar();
    printf("\nDigite a profundidade: ");
    scanf("%f", &(p->dimensoes.profundidade));
    getchar();
    printf("\nDigite a altura: ");
    scanf("%f", &(p->dimensoes.altura));
    getchar();
}

void consul(P * p){
    char C;
    if(strlen(p->nome) == 0){
        printf("\nProduto nao cadastrado!\n");
        while((C=getchar()) != '\n');
        return;
    }
    printf("\n%s, R$ %.2f, Largura: %.2fm x Profundidade: %.2fm x Altura: %.2fm\n", p->nome, p->preco,(p->dimensoes.largura),(p->dimensoes.profundidade), (p->dimensoes.altura));
    while((C=getchar())!='\n');
}

int main(){
    int opt1=-1, opt2=0, np=0, i;
    char C, fil[MAXLEN];
    FILE * f;
    P * produtos = (P *) calloc(1, sizeof(P));
    while(opt1 != 0){
        printf("\n\tMENU\t\n");
        printf("Produtos em memoria: %d", np);
        printf("\n1. Consultar\n2. Cadastrar novo\n3. Carregar de arquivo para memoria (sobrescreve memoria)\n4. Salvar memoria em arquivo (sobrescreve arquivo)\n0. Sair\n> ");
        scanf("%d", &opt1);
        getchar();
        opt2 = -1;
        switch(opt1){
            case 1:
                while(opt2!=0){
                	if(np == 0){
                		printf("\nNenhum produto cadastrado!\n");
                		while((C=getchar()) != '\n');
                		break;
					}
                    printf("\nConsulta de Produtos\n");
                    printf("\nProdutos em memoria: %d", np);
                    printf("\n0. Voltar");
                    for(i=0; i<np; i++)
                        printf("\n%d. %s", i+1, produtos[i].nome);
                    printf("\n> ");
                    scanf("%d", &opt2);
                    getchar();
                    if(opt2>0 && opt2<=np)
                        consul(&produtos[opt2-1]);
                    if(opt2<0 || opt2>np)
                        printf("\nProduto inexistente!\n");
                }
                break;
            case 2:
            	np++;
                produtos = (P *) realloc(produtos, np * sizeof(produtos));
                cad(&produtos[np-1]);
                printf("\nCadastrado com sucesso!\n");
                while((C=getchar()) != '\n');
                break;
            case 3:
            	printf("\nDigite o nome do arquivo: ");
            	scanf("%s", (char *)fil);
            	getchar();
                f = fopen(fil, "rb");
                if(f){
                    fread(&np, sizeof(int), 1, f);
                    produtos = (P *)calloc(np , sizeof(produtos));
                    fread((void *)produtos, sizeof(produtos), np, f);
                    fclose(f);
                    printf("\nArquivo contem %d produto(s). Leitura realizada com sucesso!\n", np);
                    while((C=getchar()) != '\n');
                }else{
                    printf("\nO arquivo nao pode ser aberto!\n");
                    while((C=getchar()) != '\n');
                }
                break;
            case 4:
            	printf("\nDigite o nome do arquivo: ");
            	scanf("%s", (char *)fil);
            	getchar();
            	f = fopen(fil, "wb");
                if(f){
                    fwrite(&np, sizeof(int), 1, f);
                    fwrite(produtos, sizeof(produtos), np, f);
                    fclose(f);
                    printf("\nProdutos armazenados em disco com sucesso!!\n");
                    while((C=getchar()) != '\n');
                }else{
                    printf("\nO arquivo nao pode ser aberto!\n");
                    while((C=getchar()) != '\n');
                }
                break;
            default:
                if(opt1!=0)
                    printf("\nOpcao invalida!\n");
                break;
        }
    }
    free(produtos);
    return 0;
}
