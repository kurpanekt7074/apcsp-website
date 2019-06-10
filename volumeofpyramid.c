
#include<stdio.h>
#include<math.h>
 
int main() {
   float length, width, height, area;
 
   for (int j = 1; j <= 3; j++)
   {
    if (j==1)
    {
   printf("\nEnter the Length of Pyramid : ");
   scanf("%f", &length);
    }
    if (j==2)
    {
   printf("\nEnter the Width of Pyramid : ");
   scanf("%f", &width);
    }
    if (j==3){
   printf("\nEnter the Height of Pyramid : ");
   scanf("%f", &height);
   }
   }

    for (int i = 1; i <=2; i++)
    {
    
    if (i==1)
    {
      area = length * width * height / 3;
    }
   
    if (i==2) 
    {
   printf("\nVolume of Pyramid : %f\n", area);
    }
    }
   return (0);
}


