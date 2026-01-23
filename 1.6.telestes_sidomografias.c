/*

ΑΥΞΗΣΗ ΜΕΤΑΒΛΗΤΗΣ : +=
ΜΕΙΩΣΗ ΜΕΤΑΒΛΗΤΗΣ : -=
ΔΙΑΙΡΕΣΗ ΜΕΤΑΒΛΗΤΗΣ:/=
ΠΟΛ/ΜΟΣ ΜΕΤΑΒΛΗΤΗς: *=
MODULO ΜΕΤΑΒΛΗΤΗς: %=

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5,y = 3,a = 2,b = 2;


    x+=5;
    printf("\nx = x + 5 = %d",x);
    y-=2;
    printf("\ny = y - 2 = %d",y);
    x/=y;
    printf("\nx = x / y = %d",x);
    x*=a+b;
    printf("\nx = x * a + b = %d",x);
    x%=8;
    printf("\nx = x %% 8 =  %d",x);
    
    return 0;
}