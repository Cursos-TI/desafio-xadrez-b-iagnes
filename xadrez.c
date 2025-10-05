#include <stdio.h>

int main () {

    //Movimentação da Torre
    printf("----------------------------------------\n");
    printf("Posicao da Torre\n");
    int i = 0;

    // Torre: usa 'i' como variável de controle local, inicia em 0 e vai até 4 (5 movimentos)
    for (int i = 0; i < 5; i++) 
    {
        printf("Direita\n"); // impressão da posição
    }
    
    printf("----------------------------------------\n");

    // Movimentação Bispo
    // Bispo: usa 'j' como variável de controle local, inicia em 0 e vai até 4 (5 movimentos)
    printf("Posição do Bispo\n");

    int j = 0;
    while (j <= 4) { 

    // impressão da posição do Bispo
        printf("cima\n"); 
        printf("direita\n");
        j++;
    }
    
    printf("----------------------------------------\n");
    
    // Movimentação da Rainha  
    printf("Posicao da Rainha:\n");

    // Rainha: usa 'k' como variável de controle local, inicia em 0 e vai até 7 (8 movimentos)
    int k = 0;
    do {
        printf("esquerda\n"); // impressão da posição
        k++;
    } while (k <= 7); // condição da posição da Rainha
    printf("----------------------------------------\n");

    return 0;
}