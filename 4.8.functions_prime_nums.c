/*  Φυσικος αριθμος λεμε οτι ειναι πρωτος αν διαιρειται (ακριβως) μονο με τον εαυτο του και την μοναδα.
    Το 1 θεωρειται οτι δεν ειναι πρώτος.
    Κατασκευαστε ενα προγραμμα :
    Θα οριζει μια συναρτηση με ονομα isprime() η οποια θα δεχεται ως ορισμα εναν ακεραιο αριθμο
    θα εξεταζει αν ειναι πρωτος και θα επιστρεφει 1 αν ειναι πρωτος και 0 αν δεν ειναι.
    Η Main θα διαβαζει 2 φυσικους ελεγχοντας στην εισοδο να ειναι >0 που θα οριζουν την αρχη και το τελος ενος κλειστου
    διαστηματος πχ α=5 ,β=8 και θα τυπωνει τους φυσικους αριθμους σε αυτο το διαστημα που ειναι πρωτοι.
    0 = Den einai prwtos , den diaireitai me kanenan.
    1 = X
    2 = 2/1 = 2 , 2/2 = 1 Einai prwtos
    3 = 3/1 = 3, 3/3 = 1 Einai prwtos
    4 = 4/1 = 4, 4/4 = 1 , 4/2 = 2 Den einai prwtos, 2*2
    5 = 5/1 = 5, 5/5 = 1 Einai prwtos
    6 = 6/1 = 6, 6/6 = 1 , 6/3 = 3 Den einai prwtos 3*2
*/

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n);

int main() {
    system("chcp 65001");
    // printf("Is number prime?(true=1,false=0) : %d",is_prime(3));
    // return 0;

    int i, start,finish;

    do{
        printf("Insert start: ");
        scanf("%d", &start);

        if (start<=0)
            printf("Number must be  > 0 ");
    }while (start <= 0);

    do{
        printf("Insert end: ");
        scanf("%d", &finish);

        if (!(start<=finish))
            printf("Number must be  > %d(start) ",start);
    }while (!(start <= finish));
    
    for (i=start; i<=finish; i++)
        if(is_prime(i))
            printf("\nTo %d einai prwtos.",i);

            return 0;
}

int is_prime(int n)
{
    int i;
    int check;

    if(n==0 || n==1)
        return 0;
    
    check =1;
    for (i=2; i<=n/2; i++)
        if( n % i == 0)
            check = 0;

    return check;
}