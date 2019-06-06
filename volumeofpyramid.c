
#include<stdio.h>

 
int main() {
   float length, width, height, area;
 
   printf("\nEnter the Length of Pyramid : ");
   scanf("%f", &length);
 
   printf("\nEnter the Width of Pyramid : ");
   scanf("%f", &width);

   printf("\nEnter the Width of Pyramid : ");
   scanf("%f", &height);
 
 
   area = length * width * height / 3;
   printf("\nVolume of Pyramid : %f\n", area);
 
   return (0);
}




