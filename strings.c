#include <stdio.h>
#include <string.h>

int main() {
    //string array intialized 
    //i appreciate python a lot more after learning this
    char str[] = "UNC Charlotte";

    // loop through the len of str array and print each letter
    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}