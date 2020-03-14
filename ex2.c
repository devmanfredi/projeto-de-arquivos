#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, *v2, i, j, n, aux = 1;

    printf("\nDigite o tamanho do vetor : ");
    scanf("%d", &n);
    
    v = malloc(sizeof(int) * n);
    v2 = malloc(sizeof(int) * n);
    
    for ( i = 0; i < n; i++){
        printf("Digite um valor para a posicao v[%d]: ", i);
        scanf("%d",&v[i]);
    }
    
    printf("\n\nSeu vetor: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
    
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n ; j++){
           aux *= (i != j) ? v[j] : 1;
        }
        v2[i] = aux;
        aux = 1; 
    }
    
    printf("\n\nNovo Vetor: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }
    printf("]\n");
    
    free(v);
    free(v2);
    
    return 1;
}