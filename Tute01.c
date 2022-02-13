/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int i;
	float m[2]={0},avg=0,sum=0;
	for(i=0;i<2;i++)
   {
	
	printf("Enter marks of subject %d : ",i+1);
	scanf("%f",&m[i]);
	sum=sum+m[i];
      
	}
   
	avg=sum/2;
	printf("average marks : %.2f",avg);
  
  return 0;
}

