#include <stdio.h>

int main() {
    int i;

   
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    
    printf("\nMovimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    i = 1;
    while(i <= 5) {
        printf("Cima , Direita\n");
        i++;
    }

   
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= 8);

    return 0;
}
