//Pietro Urias
// 11721ECP001

#include<stdio.h>
#include<stdlib.h>
#define TAM 100

void definir(float vetor[TAM]){
	int i;
	for(i=0;i<TAM;i++){
 	vetor[i]= 0.01*(rand()%101+50);
	}
}

float soma(float vetor[TAM],int n){
	if(n==1){
		return vetor[0];
	}
	else 
	return vetor[n-1]+soma(vetor,n-1);
}

float mult(float vetor[TAM],int n){

	if(n==1){

		return vetor[0];

	}

	else 

	return vetor[n-1]*mult(vetor,n-1);

}

void printar(float vetor[TAM])
{

	int i=0;
	for (i=0;i<TAM;i++){	
		printf("%.2f\t",vetor[i]);
	}
}

int main ()
{

	srand(123456);
	float vet[TAM],resultado;
	int i,op,n=TAM;
	definir(vet);
	printf("Menu:\n1->Somatorio.\n2->Produtorio.\n3->Printar os valores dos vetores e sair do  programa.\n\nOpcao desejada: ");
	Menu:
	scanf("%d",&op);
	getchar();
	if(op<1 || op>3){
		printf("Opcao invalida, tente novamente: ");
		goto Menu;
	}
	
	switch(op){
		case 1:resultado=soma(vet,n);printf("\nSomatorio:%.3f",resultado);break;
		case 2:resultado=mult(vet,n);printf("\nProdutorio:%f",resultado);break;
		case 3:printf("\n");printar(vet);break;
	}
	return 0;
}
