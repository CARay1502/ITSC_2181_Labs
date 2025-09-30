// Part 2 answer 
// the answer will be 3 -> 903 -> 1803
//this is because the first value of a[3] is 3 and then it adds 900 to it twice with (void) f( a ) x2


#include <stdio.h>

int main(void) {

    //intialize array for 12 memory spaces
    int arr[12] = {0};

    // thbis will set elements at specific indexs 
    arr[0] = 1;
    arr [2]= 3;
    arr[6] = 7;

    printf("array items: \n");
    //loop thru array and display
    for (int i = 0; i < 12; i++) {
        //print array at index i
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n");

    //add stuff from array to sum var
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += arr[i];

    }
    //prints the total 
    printf("Sum of array: %d\n", sum);

    return 0;
}