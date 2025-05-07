#include <stdio.h>

int main (){
    int T = 1, R = 1, B = 1;// 'T'orre, 'R'ainha, 'B'ispo
    
    printf("-----Movimento da Torre------\n");
    do { 
        printf("Direita\n", T);
        T++; }//Utilizei o Do While para simular o movimento da Torre em 5x casas para a Direita
    while (T <= 5);
    
    printf("-----------------------------\n");

    printf("-----Movimento da Bispo------\n");
    while (B <= 5) {
        printf("Cima,Direita\n", T);
        B++; }
        //Utilizei o While para simular o movimento do Bispo em 5x casas para Cima-Direita(diagonal)

    printf("-----------------------------\n");

    printf("-----Movimento da Rainha-----\n");
    for ( R; R <= 8; R++){
        printf("Esquerda\n", R); }
        //Utilizei o For para simular o movimento da Rainha em 8x casas para a esquerda
   
return 0;
}