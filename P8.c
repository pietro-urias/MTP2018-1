//Pietro Urias Martins da Silva
// 11721ECP001

#include <stdio.h>
#include <stdlib.h>
void Gnum(float * vet, int TAM) {
	int x;  
	for(x = 0; x < TAM; x++) 
		vet[x] = (float) rand()/(float) RAND_MAX + 0.5f;}
float Sorvet(float v[], int N){
	 if (N == 0) return 0;
   else {
      float s;
      s = Sorvet (v, N-1);
      if (v[N-1] > 0) s += v[N-1];
      return (s);}}
float prod(float v[], int N){
	float mult = 1.0f;
	for(int x=0; x<N; x++)
		mult = mult*v[x];
	return mult;
}
int main(){
	srand(123456);
	int menuzera, N=100;
	float num[100];
	Gnum(num, N);
	do{
	printf("\N Escolha uma das opcoes a seguir : \N->1 - Somatorio.\N->2 - Produto.\N->3 - Sair do prgrama.");
	printf("\nDigite a opcao desejada : ");
	scanf("%d", &menuzera);	
	getchar();
	switch(menuzera){
		case 1:
			printf("\nSomatorio: %f", Sorvet(num, N));
			break;
		case 2:
			printf("\nProduto: %f", prod(num,N));
			break;
		case 3:
			return 0;
		default:
			break;
	}}while(menuzera != 4);
	return 0;}
