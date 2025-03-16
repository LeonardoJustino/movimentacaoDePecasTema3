#include <stdio.h>

int main(){
    int movement, peca; // Declaração de variáveis
    movement = 1;
    // Escolha de peça
    printf("Escolha uma destas 3 peças!\n"); 
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    scanf("%d", &peca);

    // uso do switch para condional de qual consequeência vai ter cada escolha
    switch (peca)
    {
    case 1:
        printf("Você escolheu Torre\n");
        printf("Esta peça só se movimentar 5 casas para direita.\n");
        
        while (movement <= 5)// enquanto movement for menor igual a 5 ele vai imprimir "Direita"
        {
            printf("Direita!\n");
            movement++;
        }
        
        break;
        case 2:
        printf("Você escolheu Bispo\n");
        printf("Está peça se move na diagonal em 5 movimentos!\n");
        
        for (int i = 1; i <= 5; i++) // aqui vai imprimir enquanto menor igual a 5 "Cima,Direita"
        {
            printf("Cima,Direita\n");
            
        }
        
        break;
        
        case 3:
        printf("Você escolheu a Rainha\n");
        do
        {
            printf("Esquerda\n"); // enquanto menor e igual a 8 ele vai imprimir o movimento para a "Esquerda" 
            movement++;
        } while (movement <= 8);
        
        break;
    default:
        printf("Peça inválida!"); // Se nenhuma das opções da como "peça inválida"
        break;
    }
    return 0;
}