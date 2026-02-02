#include <stdio.h>

int main() {
    
    int a,a2,b,b2,player1,player2;

    printf("Insert first dice Player A: ");
    scanf("%d",&a);

    printf("Insert second dice Player A: ");
    scanf("%d",&a2);

    printf("Insert first dice Player B: ");
    scanf("%d",&b);

    printf("Insert second dice Player B: ");
    scanf("%d",&b2);

    player1 = a + a2;
    player2 = b + b2;

    if (player1 > player2)
        printf("Player 1 Wins with result %d",player1);
    else if (player2 > player1)
        printf("Player 2 Wins with result %d",player2);
    else
        printf("Draw");


    return 0;
}