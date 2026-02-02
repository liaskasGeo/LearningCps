#include <stdio.h>
#include <stdlib.h>

void f1();
void f2();

int x; //katholiki metavliti , tin vlepoun oloi

int main() {
    system("chcp 65001");

    int a = 0; //Topiki metavliti mono stin main

    x = 5;
    printf("\nmain: a = %d, x = %d",a,x);
    f1();
    printf("\nmain: a = %d,x = %d",a,x);
    f2();
    printf("\nmain: a = %d,x = %d",a,x);

    return 0;
}

void f1(){

    int a = 2, x=0; //topikes metavlites tis f1 , exoume diplo onoma stin x alla epikratei to topiko onoma
    printf("\nf1: a = %d,x = %d",a,x);
}

void f2(){
    int a = 8; 

    x = 7; //anaferete stin katholiki x

    printf("\nf2: a = %d,x = %d",a,x);
}