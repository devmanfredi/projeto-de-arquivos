#include <stdio.h>

int main(){
    int *v, n, i;
    
    printf("\nDigite o tamanho do vetor : ");
    scanf("%d", &n);
    
    v = malloc(sizeof(int) * n);
    
    for (i = 0; i < n; i++) {
        printf("Digite um valor para a posicao V[%d]: ", i);
        scanf("%d",&v[i]);
    }
    
    printf("\n\nSeu vetor: [ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
    
    int soma = 0;
    for ( i = 0; i < n; i+=2)
    {
        soma += v[i];
    }
    
    printf("A soma eh: %d\n", soma);

    return 1;
}