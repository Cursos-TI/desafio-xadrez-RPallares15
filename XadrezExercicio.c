#include <stdio.h>

int main (){
    int T = 1, R = 1, B = 1, C1 = 1, C2 = 1;// 'T'orre, 'R'ainha, 'B'ispo, 'C'avalo
    
    printf("-----------------------------\n");
    printf("-----Movimento da Torre------\n");
    do { 
        printf("Direita\n", T);//Simulando o movimento da Torre 5x para a Direita
        T++; }//Utilizei o Do While
    while (T <= 5);
    
    printf("-----------------------------\n");

    printf("-----Movimento da Bispo------\n");
    while (B <= 5) {
        printf("Cima,Direita\n", T);//Simulando o movimento do Bispo 5x para a Cima-Direita(Diagonal)
        B++; }//Utilizei o While

    printf("-----------------------------\n");

    printf("-----Movimento da Rainha-----\n");
    for ( R; R <= 8; R++){
        printf("Esquerda\n", R); }//Simulando o movimento da Rainha 8x para a Esquerda
        //Utilizei o For
   
    printf("-----------------------------\n");

    printf("-----Movimento do Cavalo-----\n");
    for (C1; C1 <= 2; C1++) {
        printf("Baixo\n", C1);
    }
    while (C2 <= 1) {
        printf("Esquerda\n", C2);
        C2++;
    }   //Utilizei o For e o While
    //Simulando o movimento do Cavalo 2x para Baixo e 1x para a Esquerda (Movimento em L)
    
return 0;
}