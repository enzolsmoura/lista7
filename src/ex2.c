/* 
 * Enunciado: 
 * Implemente um programa que permita a entrada de valores de um array cujo 
 * tamanho máximo é definido pela constante MAX. A quantidade de valores 
 * armazenado no vetor será definida pelo usuário (quando digitar -100, a 
 * leitura para). É obrigatório o uso da subrotina ler_vetor, que recebe como 
 * parâmetros um ponteiro que aponta para o início do vetor e um ponteiro para 
 * um valor inteiro que representa o tamanho real do vetor.
 *
 * Exemplos:
 *
 * Digite os valores do vetor: 1 2 3 4 5 6 7 -100
 * [1, 2, 3, 4, 5, 6, 7]
 *
 */

#include <stdio.h>

#define MAX 100
void ler_vetor(int *v, int *tam);
void exibe_vetor(int *v, int tam);

int main (int argc, char *argv[])
{
  int vetor[MAX], a, *v, *tam;
  printf("Digite o vetor: ");
  for(int i=0;i<MAX;i++){
    scanf("%i",&a);
    if(a==-100){
      tam = &i;
      break;
    } 
    vetor[i] = a;
  }
  v = vetor;
  ler_vetor(v,tam);
  return 0;
}

void ler_vetor(int *v, int *tam) {
  printf("[");
  for(int i = 0;i<*tam;i++){
    printf("%i",*(v+i));
    if(i==*tam-1){
      break;
    }
    printf(", ");
  }
    
  
  printf("]");
}

void exibe_vetor(int *v, int tam) {
  printf("[");
  for(int i = 0; i < tam; ++i) {
    printf("%i", *(v+i));
    if(i != tam - 1) printf(", ");
  }
  printf("]\n");
}
