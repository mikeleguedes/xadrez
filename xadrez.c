#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita (usa for)
    int i;
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal cima-direita (usa while)
    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Rainha: 8 casas para a esquerda (usa do-while)
    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
