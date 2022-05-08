#include <stdio.h>

#include <stdlib.h>

void selection_print (int * vet, int n);

void gera_vetor(int * vet , int n);

int main(void) {
    int n;

    while(n==0){
        printf("ESCOLHA UM VALOR DIFERENTE DE ZERO PARA AS POSICOES DO  VETOR :  ");
        scanf("%d", &n);
    }

    int vet[n];
    gera_vetor(vet, n);
    selection_print(vet, n );

  return 0;
}

void gera_vetor(int * vet , int n){
    for(int i=0; i<n; i++) {
        vet[i] = rand() % 1000;
    }

}

void selection_print (int * vet, int n){
    for(int i = 0; i < n - 1; i++) {
        int menor = i;
        for(int j = i + 1; j < n; j++) {
            if (vet[j] < vet[menor]) menor = j;
        }
        int aux = vet[i];
        vet[i] = vet[menor];
        vet[menor] = aux;
    }
    printf("O VETOR ORDENADO PELO METODO SELECTION SORT E : ");
    for (int i = 0 ; i<n ; i++) {
        printf("[%d] ", vet[i]);
    }
}




