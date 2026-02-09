#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBERS 100  // μέγιστος αριθμός

double average_dynamic(int numbers[], int count);

int main(void)
{
    int count;
    int numbers[MAX_NUMBERS]; // σταθερός πίνακας

    printf("How many numbers do you want to enter? ");
    scanf("%d", &count);

    if (count <= 0 || count > MAX_NUMBERS)
    {
        printf("Invalid count! Must be 1-%d\n", MAX_NUMBERS);
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Average: %.2f\n", average_dynamic(numbers, count));
    return 0;
}

double average_dynamic(int numbers[], int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += numbers[i];
    return sum / count;
}

