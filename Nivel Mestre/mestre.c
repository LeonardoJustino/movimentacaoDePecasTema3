#include <stdio.h>
void moveTorre(int move){
    if(move < 5){
        printf("Direita!\n");
        moveTorre(move + 1);
    }
}

void moveBispo(int move){
    if(move < 5){
        printf("Cima,Esquerda\n");
        moveBispo(move + 1);
    }
}

void moveRainha(int move){
    if(move < 8){
    printf("Esquerda!\n");
    moveRainha(move + 1);
}
}



int main(){
    int movement,casas, peca; // Declaração de variáveis
    movement = 1;
    casas = 0;
    // Escolha de peça
    printf("Escolha uma destas 3 peças!\n"); 
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    scanf("%d", &peca);

    // uso do switch para condional de qual consequeência vai ter cada escolha
    switch (peca)
    {
    case 1:
        printf("Você escolheu Torre\n");
        printf("Esta peça só se movimentar 5 casas para direita.\n");
        
       
        moveTorre(casas);
        
        break;
        case 2:
        printf("Você escolheu Bispo\n");
        printf("Está peça se move na diagonal em 5 movimentos!\n");
        printf("Bispo 1 movendo...\n");
        moveBispo(casas);
        
        printf("Bispo 2 movendo...\n");
       for (int j = 0, k; j < 5; j++){
            printf("Cima\n");
        for (k = 0; k < 1; k++){
            printf("Direita\n");
        }
       }
        
        break;
        
        case 3:
        printf("Você escolheu a Rainha\n");
        moveRainha(casas);
        
        break;
        case 4:
        printf("Você escolheu o Cavalo\n");

        for(int m = 1, i = 0; m < 2;  m++){
            for ( i = 0; i < 2; i++)
            {
                printf("Cima!\n");
            }
            
            printf("Direita!\n");
        }

       
           
            
        break;
    default:
        printf("Peça inválida!"); // Se nenhuma das opções da como "peça inválida"
        break;
    }
    return 0;
}