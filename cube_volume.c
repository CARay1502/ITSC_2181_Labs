#include <stdio.h>

float sum;

// INSERT FUNCTION HERE
//moved above main func so that the cube_volume(4)
//knows to promote int value to float 
float cube_volume(float side) {
    sum = 12 * side;
    return side * side * side;
}

int main(void) {
    float volume = cube_volume(4); 
    printf("Sum=%f\n", sum); 
    printf("Volume=%f\n", volume);
    return 0;
} 