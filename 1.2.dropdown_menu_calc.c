#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    int telestis;

    printf("Doste 1o akeraio: ");
    scanf("%d",&x);
    printf("Doste 2o akeraio: ");
    scanf("%d",&y);
    printf("Doste ton telesti:\n0 gia +\n1 gia -\n2 gia *\n3 gia /\n4 gia%%");
    printf("\nEpilogi? ");
    scanf("%d",&telestis);

    if (telestis == 0)
    {
        z=x+y;
        printf("%d+%d=%d",x,y,z);
    }
    else if (telestis==1)
    {
        z=x-y;
        printf("%d-%d=%d",x,y,z);
    }
    else if (telestis==2)
    {
        z=x*y;
        printf("%d*%d=%d",x,y,z);
    }
    else if (telestis==3)
    {
        z=x/y;
        printf("%d/%d=%d",x,y,z);
    }
    else if (telestis==4)
    {
        z=x%y;
        printf("%d%%d=%d",x,y,z);
    }

    return 0;
}

    