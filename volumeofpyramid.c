
#include<stdio.h>
#include <math.h>
int main() {

FILE*outFile;
   outFile = fopen("outputfinal", "w");
 if (outFile == NULL) {
   printf("error - could not open file\n");
 return 1;
}

   float length, width, height, volume;
   for (int j = 1; j <= 5; j++)
   {
     if (j==1)
   {
   printf("\nEnter the Length of Pyramid : ");

   scanf("%f", &length);

   if (length < 0)
   {
     printf("please use a positive number");
      j--;
   }
    }
   else if (j==2)
   {
   printf("\nEnter the Width of Pyramid : ");
   scanf("%f", &width);
   if (width < 0)
   {
     printf("please use a positive number");
      j--;
   }
   }
   else if (j==3)
   {
   printf("\nEnter the Height of Pyramid : ");
   scanf("%f", &height);
   if (height < 0)
   {
     printf("please use a positive number");
      j--;   
     }
   }
   else if (j==4)
   {
   volume = length * width * height /3;
   printf("\nVolume of Pyramid : %f\n", volume);
fprintf(outFile, "Volume of Pyramid :%f\n", volume);
   }
   else if (j==5)
   {
   return (0);
   }
   }
}

