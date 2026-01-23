#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

typedef int akeraios;

int main() {
    system("chcp 65001");
    akeraios x, y, z;

    printf("Δώστε έναν ακέραιο: ");
    scanf("%d", &x);

    printf("Δώστε κι άλλον ακέραιο: ");
    scanf("%d", &y);

    z = x + y;

    printf("Το αποτέλεσμα της πρόσθεσης είναι: %d\n", z);

    return 0;
}

