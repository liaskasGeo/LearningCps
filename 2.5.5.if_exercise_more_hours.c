#include <stdio.h>

int main() {
    int hours,minutes,secs,input,seconds;

    printf("Eisagete plithos deuteroleptwn: ");
    scanf("%d",&secs);

    hours = secs / 3600;
    secs = secs % 3600;
    minutes = secs / 60;
    secs = secs % 60;
    
    printf("hours : %d\n",hours);
    printf("minutes : %d\n",minutes);
    printf("secs : %d",secs);


    return 0;
}