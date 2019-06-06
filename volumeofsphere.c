
#include <stdio.h>
#include <math.h>

float volumeofcircle(float radius)
{
  float volume;
  volume = M_PI*radius*radius*radius*4/3;
  return volume;
}

int main(){
  char input[256];
  float r;
  printf("What is your sphere's radius? \n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &r) ==1) break;
    printf("Please enter a valid radius: \n");
  }
  float volume= volumeofcircle(r);
  printf("The volume of your circle is %f\n", volume);
}


