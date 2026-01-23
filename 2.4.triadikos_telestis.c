#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int a = 5, b = 10;
    int max = (a > b) ? a : b;  // Ελέγχει ποιο είναι μεγαλύτερο
    // a > b → 5 > 10 → false → max = b = 10

    int score = 75;
    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : 'F';
    // score = 75 → C
    return 0;


    // Αν c είναι κεφαλαίο, τότε 'Uppercase', αλλιώς 'Lowercase'
    /*condition ? value_if_true : value_if_false*/

    char c = 'A';
    char type = (c >= 'A' && c <= 'Z') ? 'Uppercase' : 'Lowercase';


    // score = 75 → grade = 'C'
    int score = 75;
    char grade = (score >= 90) ? 'A' :
                 (score >= 80) ? 'B' :
                 (score >= 70) ? 'C' : 'F';
    
}