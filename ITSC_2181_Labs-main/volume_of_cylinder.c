#include <stdio.h>

//int calculate_volume(float radius, float height) {
    //float volume = 0.0;
    //volume = M_PI * pow(radius, 2) * height;
    //printf("Volume: %.2f\n", volume);
    //return volume;
  //}

int main() {
  float radius = 0.0;
  float height = 0.0;
  float volume;
  
  printf("Enter the radius of the cylinder: ");
  scanf("%f", &radius);
  
  printf("Enter the height of the cylinder: ");
  scanf(" %f", &height);
  
  volume = 3.14159 * radius * radius * height; 
  printf("%.2f\n", volume);
  
  //calculate_volume(radius, height);
  
  return 0;
}