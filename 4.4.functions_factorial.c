#include <stdio.h>
#include <stdlib.h>

/*Factorial είναι ο αριθμός που βγαίνει αν πολλαπλασιάσεις όλους τους αριθμούς μέχρι τον αριθμό που διάλεξες.

Παράδειγμα:

5! = 1 × 2 × 3 × 4 × 5 = 120

3! = 1 × 2 × 3 = 6

1! = 1

0! = 1 (by definition, όχι επειδή “βγαίνει”)*/


int main() {
    system("chcp 65001");

    int i, N;
    int factorial = 1;

    printf("Insert a number to find factorial: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        factorial = factorial * i;
    }

    printf("Factorial is: %d\n", factorial);

    return 0;
}
