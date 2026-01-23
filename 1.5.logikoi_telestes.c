/*ΠΡΟΤΕΡΑΙΟΤΗΤΑ : 1: ΝΟΤ !
                  2: AND &&
                  3: OR ||
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int x,y,z,n,m,v,l;

    x = (1<2) && (2>3);/* AND &&*/
    printf("%d",x);
    y = (5<3 && (3<5));
    printf("\n%d",y);
    z = (7+3==10) || (4<2); /* OR || */
    printf("\n%d",z);
    l = ((5+2!=3)&&(1<4) || (2<4)); /*5+2!=3 = true , 1<4 = true , OR 2<4 = true αρα αποτελεσμα TRUE = 1 */
    printf("\n%d",l);
    n = (!(7<7));
    printf("\n%d",n);

    return 0;
}