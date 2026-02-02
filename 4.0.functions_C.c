#include <stdio.h>
#include <stdlib.h>

//Εδω γραφουμε τα πρωτότυπα των συναρτήσεων

void myFunction() {
  printf("I just got executed!");
}

int main() {
    system("chcp 65001");
    int c,a,b;

    myFunction();
    myFunction();
    myFunction();

    return 0;
}


