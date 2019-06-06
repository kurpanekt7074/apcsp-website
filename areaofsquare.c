#include <stdio.h>
#include <math.h>

float areaofsquare(float side)
{
  float area;
  area= side*side;
  return area;
}

int main(){
  char input[256];
  float r;
  printf("What is your square's side length? \n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &r) ==1) break;
    printf("Please enter a valid radius: \n");
  }
  float area= areaofsquare(r);
  printf("The area of your square is %f\n", area);
}



