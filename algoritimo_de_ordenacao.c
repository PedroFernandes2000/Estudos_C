#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int vet[4];
    int save;
    int size = 3;
    
    printf("escreva um vetor de 15 posições para ser organizado do maior para o menor:\n");
    for(int n = 0 ; n <= size ; n++){
        scanf("%d",&vet[n]);
    }
    
    for(int i = 0 ; i <= size ; i++){
        for(int j = i + 1 ; j <= size ; j++){
            if(vet[i]>vet[j]){
                save = vet[i];
                vet[i] = vet[j];
                vet[j] = save;
            }
        }
    }
    
    for(int n = 0 ; n <= size ; n++){
        printf("  %d",vet[n]);
    }
   // printf("\n%d",size);
    return 0;
}