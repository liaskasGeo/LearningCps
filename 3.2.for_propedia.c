#include <stdio.h>

int main() {
    int i,j,x;

    //Paradeigma propedia
    
    for (i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            x = i * j;
            printf("i:%d * j:%d = %d\n",i,j,x);
        }
    printf("\n");
    }
    return 0;
}