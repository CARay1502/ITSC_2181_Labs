#include <stdio.h>
// int temp
//int maxTemps
//int day 


int main() { 
    //vars
    int temp;
    int maxTemp;
    int maxDay = 1;
    
    //print statem
    printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
    
    for (int day = 1; day <= 10; day++) {
        printf("Enter a high temperature; ");
        scanf("%d", &temp);
        
        if (day == 1) {
            maxTemp = temp;
            maxDay = 1;
        } else {
            //not sure if neszted if statement is okay
            if (temp >= maxTemp) {
                maxTemp = temp;
                maxDay = day;
            }
        }
    }
    
    printf("The highest recorded temperature in the 10-day period was: %d degreeds\n", maxTemp);
    printf("Last recorded on: Day %d\n", maxDay);
    
    return 0;
}