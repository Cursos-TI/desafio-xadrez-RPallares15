#include <stdio.h>

void MoverTorre(int casasT) {
    if (casasT > 0) {
        printf("Direita\n", MoverTorre);
        MoverTorre(casasT - 1);}
}

void MoverBispo(int casasB) {
    if (casasB > 0) {
        printf("Cima,Direita\n", MoverBispo);
        MoverBispo(casasB - 1);}
}

void MoverRainha(int casasR) {
    if (casasR > 0) {
        printf("Esquerda\n", MoverRainha);
        MoverRainha(casasR - 1);}
}

int main (){
    int C1=1, C2=1;
    
    printf("-----------------------------\n");
    printf("-----Movimento da Torre------\n");
        MoverTorre(5);
    //---------------------------------------------------------------//
    printf("-----------------------------\n");
    printf("-----Movimento da Bispo------\n");
    printf("----------Recursivo----------\n");

        MoverBispo(5);
    //---------------------------------------------------------------//
    printf("-----------------------------\n");
    printf("-----Movimento da Bispo------\n");
    printf("--------Loop Aninhado--------\n");

    for (int B1 = 1; B1 <= 5; B1++) {
        
        for (int B2 = 1; B2 <= 1; B2++) {
            
            printf("Direita,", B1);
        }
        printf("Cima\n", B1);
    }
    //---------------------------------------------------------------//
    printf("-----------------------------\n"); 
    printf("-----Movimento da Rainha-----\n");
        MoverRainha(8);
    //---------------------------------------------------------------//
    printf("-----------------------------\n");
    printf("-----Movimento do Cavalo-----\n");
    for (int C1 = 1; C1 <= 1; C1++) { 
        for (int C2 = 1; C2 <= 2; C2++) { 
                
            printf("Cima\n", C2);
        }
        printf("Direita\n", C1);
    }

return 0;
}   