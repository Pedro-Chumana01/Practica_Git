#include <stdio.h>
#include <stdlib.h>
void encerar(int [],int);
void ingresar(int [],int);
void ordenar(int [],int);
void imprimir(int [],int);

void ingresar(int vector[],int tam){
	int i;
	printf("Ingrese elementos al arreglo ");
	for(i=0;i<tam;i++){
		scanf("%d",&vector[i]);
	}
}
void ordenar(int vector[],int tam){
	int i,j,aux;
	for(i=0 ; i<tam ; i++){
		for(j=0 ; j<tam ; j++){
			if(vector[i]>vector[j]){
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
			}
		}
	}
}
void imprimir(int vector[],int tam){
	int i;
	printf("\NARREGLO ORDENADO\N");
	for(i=0;i<tam;i++){
		printf("\n%d",vector[i]);
	}
}	
int main(int argc, char** argv) {
	int tam;
	printf("\nIngrese el tamanio:\n");
	scanf("%d",&tam);
	int vector[tam];
	ingresar(vector,tam);
	ordenar(vector,tam);
	imprimir(vector,tam);
	return 0;
}
