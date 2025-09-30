#include <stdio.h>

int main() {
    //array intitalization for 5 items
    float arr[5];

    //get user input for 5 numbers
    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

        //add all arr values together
    float sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // the sume divides by 5 for average 
    float average= sum / 5.0;

    //all results
    printf("\nResults: \n");
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n"), average;

    return 0;
}