#include <stdio.h>

int main(){
    int tamanho;
    int i, j = 0;
    int soma, valor = 0;
    int *p;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);

    printf("Digite o valor da soma: \n");
    scanf("%d", &valor);

    p = malloc(tamanho * sizeof(int));


    for(i = 0; i < tamanho; i++){
        printf("Digite os elementos do vetor V[%d]: \n", i);
        scanf("%d", &p[i]);
    }

    for(i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho; j++){
            soma = p[i] + p[j];
            if(soma == valor) {
                printf("%d",soma);
            return 1;
            }
        }

    }


}

