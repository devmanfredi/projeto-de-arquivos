#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, n, i, achou, count;
    
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

     do {
        achou = 0;
        count++;
        for (i = 0; i < n; i++) {
            if (v[i] == count) {
                achou = 1;
                break;
            }
        }
    } while (achou);

    printf("Inteiro Positivo que não existe no vetor: %d\n", count);
    free(v);

    return 1;
}